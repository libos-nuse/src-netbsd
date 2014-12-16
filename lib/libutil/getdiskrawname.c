/*	$NetBSD: getdiskrawname.c,v 1.5 2014/09/17 23:54:42 christos Exp $	*/

/*-
 * Copyright (c) 2012 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Christos Zoulas.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#include <sys/cdefs.h>
__RCSID("$NetBSD: getdiskrawname.c,v 1.5 2014/09/17 23:54:42 christos Exp $");

#include <sys/stat.h>

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <util.h>
#include <limits.h>
#include <unistd.h>

static const char *
resolve_link(char *buf, size_t bufsiz, const char *name)
{
	const char *dp;
	size_t nlen;
	ssize_t dlen;

	dlen = readlink(name, buf, bufsiz - 1);
	if (dlen == -1)
		return name;

	buf[dlen] = '\0';

	if (buf[0] != '/') {
		dp = strrchr(name, '/');
		if (dp != NULL) {
			nlen = dp - name + 1;
			if (nlen + 1 > bufsiz)
				return NULL;
			if (nlen + dlen + 1 > bufsiz)
				return NULL;

			memmove(buf + nlen, buf, (size_t)dlen + 1);
			memcpy(buf, name, nlen);
		}
	}

	return buf;
}

const char *
getdiskrawname(char *buf, size_t bufsiz, const char *name)
{
	const char *dp;
	struct stat st;
	char dest[PATH_MAX];

	if ((name = resolve_link(dest, sizeof(dest), name)) == NULL) {
		errno = EINVAL;
		return NULL;
	}

	dp = strrchr(name, '/');

	if (stat(name, &st) == -1)
		return NULL;

	if (!S_ISBLK(st.st_mode)) {
		errno = EFTYPE;
		return NULL;
	}

	if (dp != NULL)
		(void)snprintf(buf, bufsiz, "%.*s/r%s", (int)(dp - name), name, dp + 1);
	else
		(void)snprintf(buf, bufsiz, "r%s", name);

	return buf;
}

const char *
getdiskcookedname(char *buf, size_t bufsiz, const char *name)
{
	const char *dp;
	struct stat st;
	char dest[PATH_MAX];

	if ((name = resolve_link(dest, sizeof(dest), name)) == NULL) {
		errno = EINVAL;
		return NULL;
	}

	dp = strrchr(name, '/');

	if ((dp != NULL && dp[1] != 'r') || (dp == NULL && name[0] != 'r')) {
		errno = EINVAL;
		return NULL;
	}

	if (stat(name, &st) == -1)
		return NULL;

	if (!S_ISCHR(st.st_mode)) {
		errno = EFTYPE;
		return NULL;
	}

	if (dp != NULL)
		(void)snprintf(buf, bufsiz, "%.*s/%s", (int)(dp - name), name, dp + 2);
	else
		(void)snprintf(buf, bufsiz, "%s", name + 1);

	return buf;
}
