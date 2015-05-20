/* $NetBSD: ultrix_sysent.c,v 1.66 2015/03/07 16:41:54 christos Exp $ */

/*
 * System call switch table.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.52 2013/11/07 19:37:19 njoly Exp
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: ultrix_sysent.c,v 1.66 2015/03/07 16:41:54 christos Exp $");

#include <sys/param.h>
#include <sys/systm.h>
#include <sys/signal.h>
#include <sys/mount.h>
#include <sys/sched.h>
#include <sys/syscallargs.h>
#include <compat/ultrix/ultrix_syscallargs.h>

#define	s(type)	sizeof(type)
#define	n(type)	(sizeof(type)/sizeof (register_t))
#define	ns(type)	n(type), s(type)

struct sysent ultrix_sysent[] = {
	{ 0, 0, 0,
	    (sy_call_t *)sys_nosys, 0, 0 },		/* 0 = syscall */
	{ ns(struct sys_exit_args), 0,
	    (sy_call_t *)sys_exit, 0, 0 },		/* 1 = exit */
	{ 0, 0, 0,
	    (sy_call_t *)sys_fork, 0, 0 },		/* 2 = fork */
	{ ns(struct sys_read_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_read, 0, 0 },		/* 3 = read */
	{ ns(struct sys_write_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_write, 0, 0 },		/* 4 = write */
	{ ns(struct ultrix_sys_open_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_open, 0, 0 },	/* 5 = open */
	{ ns(struct sys_close_args), 0,
	    (sy_call_t *)sys_close, 0, 0 },		/* 6 = close */
	{ 0, 0, 0,
	    (sy_call_t *)compat_43_sys_wait, 0, 0 },	/* 7 = owait */
	{ ns(struct ultrix_sys_creat_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_creat, 0, 0 },	/* 8 = creat */
	{ ns(struct sys_link_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_link, 0, 0 },		/* 9 = link */
	{ ns(struct sys_unlink_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_unlink, 0, 0 },		/* 10 = unlink */
	{ ns(struct ultrix_sys_execv_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_execv, 0, 0 },	/* 11 = execv */
	{ ns(struct sys_chdir_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_chdir, 0, 0 },		/* 12 = chdir */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 13 = obsolete time */
	{ ns(struct ultrix_sys_mknod_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_mknod, 0, 0 },	/* 14 = mknod */
	{ ns(struct sys_chmod_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_chmod, 0, 0 },		/* 15 = chmod */
	{ ns(struct sys___posix_chown_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys___posix_chown, 0, 0 },	/* 16 = __posix_chown */
	{ ns(struct sys_obreak_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_obreak, 0, 0 },		/* 17 = break */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 18 = obsolete stat */
	{ ns(struct compat_43_sys_lseek_args), 0,
	    (sy_call_t *)compat_43_sys_lseek, 0, 0 },	/* 19 = lseek */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getpid, 0, 0 },		/* 20 = getpid */
	{ ns(struct ultrix_sys_mount_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_mount, 0, 0 },	/* 21 = mount */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 22 = obsolete sysV_unmount */
	{ ns(struct sys_setuid_args), 0,
	    (sy_call_t *)sys_setuid, 0, 0 },		/* 23 = setuid */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getuid, 0, 0 },		/* 24 = getuid */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 25 = obsolete v7 stime */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 26 = obsolete v7 ptrace */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 27 = obsolete v7 alarm */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 28 = obsolete v7 fstat */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 29 = obsolete v7 pause */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 30 = obsolete v7 utime */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 31 = obsolete v7 stty */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 32 = obsolete v7 gtty */
	{ ns(struct ultrix_sys_access_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_access, 0, 0 },	/* 33 = access */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 34 = obsolete v7 nice */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 35 = obsolete v7 ftime */
	{ 0, 0, 0,
	    (sy_call_t *)sys_sync, 0, 0 },		/* 36 = sync */
	{ ns(struct sys_kill_args), 0,
	    (sy_call_t *)sys_kill, 0, 0 },		/* 37 = kill */
	{ ns(struct ultrix_sys_stat_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_stat, 0, 0 },	/* 38 = stat43 */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 39 = obsolete v7 setpgrp */
	{ ns(struct ultrix_sys_lstat_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_lstat, 0, 0 },	/* 40 = lstat43 */
	{ ns(struct sys_dup_args), 0,
	    (sy_call_t *)sys_dup, 0, 0 },		/* 41 = dup */
	{ 0, 0, 0,
	    (sy_call_t *)sys_pipe, 0, 0 },		/* 42 = pipe */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 43 = obsolete v7 times */
	{ ns(struct sys_profil_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_profil, 0, 0 },		/* 44 = profil */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 45 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 46 = obsolete v7 setgid */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getgid, 0, 0 },		/* 47 = getgid */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 48 = unimplemented ssig */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 49 = unimplemented reserved for USG */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 50 = unimplemented reserved for USG */
	{ ns(struct sys_acct_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_acct, 0, 0 },		/* 51 = acct */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 52 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 53 = unimplemented syslock */
	{ ns(struct ultrix_sys_ioctl_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_ioctl, 0, 0 },	/* 54 = ioctl */
	{ ns(struct sys_reboot_args), 0,
	    (sy_call_t *)sys_reboot, 0, 0 },		/* 55 = reboot */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 56 = unimplemented v7 mpxchan */
	{ ns(struct sys_symlink_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_symlink, 0, 0 },		/* 57 = symlink */
	{ ns(struct sys_readlink_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_readlink, 0, 0 },	/* 58 = readlink */
	{ ns(struct ultrix_sys_execve_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_execve, 0, 0 },	/* 59 = execve */
	{ ns(struct sys_umask_args), 0,
	    (sy_call_t *)sys_umask, 0, 0 },		/* 60 = umask */
	{ ns(struct sys_chroot_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_chroot, 0, 0 },		/* 61 = chroot */
	{ ns(struct compat_43_sys_fstat_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_fstat, 0, 0 },	/* 62 = fstat */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 63 = unimplemented */
	{ 0, 0, 0,
	    (sy_call_t *)compat_43_sys_getpagesize, 0, 0 },/* 64 = getpagesize */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 65 = unimplemented mremap */
	{ 0, 0, 0,
	    (sy_call_t *)sys_vfork, 0, 0 },		/* 66 = vfork */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 67 = obsolete vread */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 68 = obsolete vwrite */
	{ ns(struct sys_sbrk_args), 0,
	    (sy_call_t *)sys_sbrk, 0, 0 },		/* 69 = sbrk */
	{ ns(struct sys_sstk_args), 0,
	    (sy_call_t *)sys_sstk, 0, 0 },		/* 70 = sstk */
	{ ns(struct ultrix_sys_mmap_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_mmap, 0, 0 },	/* 71 = mmap */
	{ ns(struct sys_ovadvise_args), 0,
	    (sy_call_t *)sys_ovadvise, 0, 0 },	/* 72 = vadvise */
	{ ns(struct sys_munmap_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_munmap, 0, 0 },		/* 73 = munmap */
	{ ns(struct sys_mprotect_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_mprotect, 0, 0 },	/* 74 = mprotect */
	{ ns(struct sys_madvise_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_madvise, 0, 0 },		/* 75 = madvise */
	{ 0, 0, 0,
	    (sy_call_t *)ultrix_sys_vhangup, 0, 0 },	/* 76 = vhangup */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 77 = unimplemented old vlimit */
	{ ns(struct sys_mincore_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_mincore, 0, 0 },		/* 78 = mincore */
	{ ns(struct sys_getgroups_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_getgroups, 0, 0 },	/* 79 = getgroups */
	{ ns(struct sys_setgroups_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_setgroups, 0, 0 },	/* 80 = setgroups */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getpgrp, 0, 0 },		/* 81 = getpgrp */
	{ ns(struct ultrix_sys_setpgrp_args), 0,
	    (sy_call_t *)ultrix_sys_setpgrp, 0, 0 },	/* 82 = setpgrp */
	{ ns(struct sys___setitimer50_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys___setitimer50, 0, 0 },	/* 83 = __setitimer50 */
	{ ns(struct ultrix_sys_wait3_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_wait3, 0, 0 },	/* 84 = wait3 */
	{ ns(struct compat_12_sys_swapon_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_12_sys_swapon, 0, 0 },/* 85 = swapon */
	{ ns(struct sys___getitimer50_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys___getitimer50, 0, 0 },	/* 86 = __getitimer50 */
	{ ns(struct compat_43_sys_gethostname_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_gethostname, 0, 0 },/* 87 = gethostname */
	{ ns(struct compat_43_sys_sethostname_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_sethostname, 0, 0 },/* 88 = sethostname */
	{ 0, 0, 0,
	    (sy_call_t *)compat_43_sys_getdtablesize, 0, 0 },/* 89 = getdtablesize */
	{ ns(struct sys_dup2_args), 0,
	    (sy_call_t *)sys_dup2, 0, 0 },		/* 90 = dup2 */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 91 = unimplemented getdopt */
	{ ns(struct ultrix_sys_fcntl_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_fcntl, 0, 0 },	/* 92 = fcntl */
	{ ns(struct ultrix_sys_select_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_select, 0, 0 },	/* 93 = select */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 94 = unimplemented setdopt */
	{ ns(struct sys_fsync_args), 0,
	    (sy_call_t *)sys_fsync, 0, 0 },		/* 95 = fsync */
	{ ns(struct sys_setpriority_args), 0,
	    (sy_call_t *)sys_setpriority, 0, 0 },	/* 96 = setpriority */
	{ ns(struct compat_30_sys_socket_args), 0,
	    (sy_call_t *)compat_30_sys_socket, 0, 0 },/* 97 = socket */
	{ ns(struct sys_connect_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_connect, 0, 0 },		/* 98 = connect */
	{ ns(struct compat_43_sys_accept_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_accept, 0, 0 },/* 99 = accept */
	{ ns(struct sys_getpriority_args), 0,
	    (sy_call_t *)sys_getpriority, 0, 0 },	/* 100 = getpriority */
	{ ns(struct compat_43_sys_send_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_send, 0, 0 },	/* 101 = send */
	{ ns(struct compat_43_sys_recv_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_recv, 0, 0 },	/* 102 = recv */
	{ ns(struct ultrix_sys_sigreturn_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_sigreturn, 0, 0 },/* 103 = sigreturn */
	{ ns(struct sys_bind_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_bind, 0, 0 },		/* 104 = bind */
	{ ns(struct ultrix_sys_setsockopt_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_setsockopt, 0, 0 },/* 105 = setsockopt */
	{ ns(struct sys_listen_args), 0,
	    (sy_call_t *)sys_listen, 0, 0 },		/* 106 = listen */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 107 = unimplemented vtimes */
	{ ns(struct ultrix_sys_sigvec_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_sigvec, 0, 0 },	/* 108 = sigvec */
	{ ns(struct compat_43_sys_sigblock_args), 0,
	    (sy_call_t *)compat_43_sys_sigblock, 0, 0 },/* 109 = sigblock */
	{ ns(struct compat_43_sys_sigsetmask_args), 0,
	    (sy_call_t *)compat_43_sys_sigsetmask, 0, 0 },/* 110 = sigsetmask */
	{ ns(struct ultrix_sys_sigsuspend_args), 0,
	    (sy_call_t *)ultrix_sys_sigsuspend, 0, 0 },/* 111 = sigsuspend */
	{ ns(struct compat_43_sys_sigstack_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_sigstack, 0, 0 },/* 112 = sigstack */
	{ ns(struct compat_43_sys_recvmsg_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_recvmsg, 0, 0 },/* 113 = recvmsg */
	{ ns(struct compat_43_sys_sendmsg_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_sendmsg, 0, 0 },/* 114 = sendmsg */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 115 = obsolete vtrace */
	{ ns(struct sys___gettimeofday50_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys___gettimeofday50, 0, 0 },/* 116 = __gettimeofday50 */
	{ ns(struct sys___getrusage50_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys___getrusage50, 0, 0 },	/* 117 = __getrusage50 */
	{ ns(struct sys_getsockopt_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_getsockopt, 0, 0 },	/* 118 = getsockopt */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 119 = unimplemented resuba */
	{ ns(struct sys_readv_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_readv, 0, 0 },		/* 120 = readv */
	{ ns(struct sys_writev_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_writev, 0, 0 },		/* 121 = writev */
	{ ns(struct sys___settimeofday50_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys___settimeofday50, 0, 0 },/* 122 = __settimeofday50 */
	{ ns(struct sys___posix_fchown_args), 0,
	    (sy_call_t *)sys___posix_fchown, 0, 0 },	/* 123 = __posix_fchown */
	{ ns(struct sys_fchmod_args), 0,
	    (sy_call_t *)sys_fchmod, 0, 0 },		/* 124 = fchmod */
	{ ns(struct compat_43_sys_recvfrom_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_recvfrom, 0, 0 },/* 125 = recvfrom */
	{ ns(struct sys_setreuid_args), 0,
	    (sy_call_t *)sys_setreuid, 0, 0 },	/* 126 = setreuid */
	{ ns(struct sys_setregid_args), 0,
	    (sy_call_t *)sys_setregid, 0, 0 },	/* 127 = setregid */
	{ ns(struct sys_rename_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_rename, 0, 0 },		/* 128 = rename */
	{ ns(struct compat_43_sys_truncate_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_truncate, 0, 0 },/* 129 = truncate */
	{ ns(struct compat_43_sys_ftruncate_args), 0,
	    (sy_call_t *)compat_43_sys_ftruncate, 0, 0 },/* 130 = ftruncate */
	{ ns(struct sys_flock_args), 0,
	    (sy_call_t *)sys_flock, 0, 0 },		/* 131 = flock */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 132 = unimplemented */
	{ ns(struct sys_sendto_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_sendto, 0, 0 },		/* 133 = sendto */
	{ ns(struct sys_shutdown_args), 0,
	    (sy_call_t *)sys_shutdown, 0, 0 },	/* 134 = shutdown */
	{ ns(struct sys_socketpair_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_socketpair, 0, 0 },	/* 135 = socketpair */
	{ ns(struct sys_mkdir_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_mkdir, 0, 0 },		/* 136 = mkdir */
	{ ns(struct sys_rmdir_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_rmdir, 0, 0 },		/* 137 = rmdir */
	{ ns(struct sys___utimes50_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys___utimes50, 0, 0 },	/* 138 = __utimes50 */
	{ ns(struct ultrix_sys_sigcleanup_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_sigcleanup, 0, 0 },/* 139 = sigcleanup */
	{ ns(struct sys___adjtime50_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys___adjtime50, 0, 0 },	/* 140 = __adjtime50 */
	{ ns(struct compat_43_sys_getpeername_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_getpeername, 0, 0 },/* 141 = getpeername */
	{ 0, 0, 0,
	    (sy_call_t *)compat_43_sys_gethostid, 0, 0 },/* 142 = gethostid */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 143 = unimplemented old sethostid */
	{ ns(struct compat_43_sys_getrlimit_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_getrlimit, 0, 0 },/* 144 = getrlimit */
	{ ns(struct compat_43_sys_setrlimit_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_setrlimit, 0, 0 },/* 145 = setrlimit */
	{ ns(struct compat_43_sys_killpg_args), 0,
	    (sy_call_t *)compat_43_sys_killpg, 0, 0 },/* 146 = killpg */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 147 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 148 = unimplemented setquota */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 149 = unimplemented quota / * needs to be nullop to boot on Ultrix root partition * / */
	{ ns(struct compat_43_sys_getsockname_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_getsockname, 0, 0 },/* 150 = getsockname */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 151 = unimplemented sysmips / * 4 args * / */
#ifdef __mips
	{ ns(struct ultrix_sys_cacheflush_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_cacheflush, 0, 0 },/* 152 = cacheflush */
	{ ns(struct ultrix_sys_cachectl_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_cachectl, 0, 0 },	/* 153 = cachectl */
#else	/* !mips */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 152 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 153 = unimplemented */
#endif	/* !mips */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 154 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 155 = unimplemented atomic_op */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 156 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 157 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 158 = unimplemented ultrix_sys_nfssvc */
	{ ns(struct compat_43_sys_getdirentries_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_getdirentries, 0, 0 },/* 159 = getdirentries */
	{ ns(struct ultrix_sys_statfs_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_statfs, 0, 0 },	/* 160 = statfs */
	{ ns(struct ultrix_sys_fstatfs_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_fstatfs, 0, 0 },	/* 161 = fstatfs */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 162 = unimplemented umount */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 163 = unimplemented async_daemon */
	{ ns(struct compat_30_sys_getfh_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_30_sys_getfh, 0, 0 },	/* 164 = getfh */
	{ ns(struct compat_09_sys_getdomainname_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_09_sys_getdomainname, 0, 0 },/* 165 = getdomainname */
	{ ns(struct compat_09_sys_setdomainname_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_09_sys_setdomainname, 0, 0 },/* 166 = setdomainname */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 167 = unimplemented */
	{ ns(struct ultrix_sys_quotactl_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_quotactl, 0, 0 },	/* 168 = quotactl */
	{ ns(struct ultrix_sys_exportfs_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_exportfs, 0, 0 },	/* 169 = exportfs */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 170 = unimplemented ultrix_sys_mount */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 171 = unimplemented 4 hdwconf */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 172 = unimplemented msgctl */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 173 = unimplemented msgget */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 174 = unimplemented msgrcv */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 175 = unimplemented msgsnd */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 176 = unimplemented semctl */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 177 = unimplemented semget */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 178 = unimplemented semop */
	{ ns(struct ultrix_sys_uname_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_uname, 0, 0 },	/* 179 = uname */
	{ ns(struct ultrix_sys_shmsys_args), 0,
	    (sy_call_t *)ultrix_sys_shmsys, 0, 0 },	/* 180 = shmsys */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 181 = unimplemented 0 plock */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 182 = unimplemented 0 lockf */
	{ ns(struct ultrix_sys_ustat_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_ustat, 0, 0 },	/* 183 = ustat */
	{ ns(struct ultrix_sys_getmnt_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_getmnt, 0, 0 },	/* 184 = getmnt */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 185 = unimplemented notdef */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 186 = unimplemented notdef */
	{ ns(struct ultrix_sys_sigpending_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_sigpending, 0, 0 },/* 187 = sigpending */
	{ 0, 0, 0,
	    (sy_call_t *)sys_setsid, 0, 0 },		/* 188 = setsid */
	{ ns(struct ultrix_sys_waitpid_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_waitpid, 0, 0 },	/* 189 = waitpid */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 190 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 191 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 192 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 193 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 194 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 195 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 196 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 197 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 198 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 199 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 200 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 201 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 202 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 203 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 204 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 205 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 206 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 207 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 208 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 209 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 210 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 211 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 212 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 213 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 214 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 215 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 216 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 217 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 218 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 219 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 220 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 221 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 222 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 223 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 224 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 225 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 226 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 227 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 228 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 229 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 230 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 231 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 232 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 233 = unimplemented 1 utc_gettime */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 234 = unimplemented 2 utc_adjtime */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 235 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 236 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 237 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 238 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 239 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 240 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 241 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 242 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 243 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 244 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 245 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 246 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 247 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 248 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 249 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 250 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 251 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 252 = unimplemented audctl / * Make no-op for installation on Ultrix rootpartition? * / */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 253 = unimplemented audgen / * Make no-op for installation on Ultrix rootpartition? * / */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 254 = unimplemented startcpu */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 255 = unimplemented stopcpu */
	{ ns(struct ultrix_sys_getsysinfo_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_getsysinfo, 0, 0 },/* 256 = getsysinfo */
	{ ns(struct ultrix_sys_setsysinfo_args), SYCALL_ARG_PTR,
	    (sy_call_t *)ultrix_sys_setsysinfo, 0, 0 },/* 257 = setsysinfo */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 258 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 259 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 260 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 261 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 262 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 263 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 264 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 265 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 266 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 267 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 268 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 269 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 270 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 271 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 272 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 273 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 274 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 275 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 276 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 277 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 278 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 279 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 280 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 281 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 282 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 283 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 284 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 285 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 286 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 287 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 288 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 289 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 290 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 291 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 292 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 293 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 294 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 295 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 296 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 297 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 298 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 299 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 300 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 301 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 302 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 303 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 304 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 305 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 306 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 307 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 308 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 309 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 310 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 311 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 312 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 313 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 314 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 315 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 316 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 317 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 318 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 319 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 320 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 321 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 322 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 323 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 324 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 325 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 326 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 327 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 328 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 329 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 330 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 331 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 332 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 333 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 334 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 335 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 336 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 337 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 338 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 339 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 340 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 341 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 342 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 343 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 344 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 345 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 346 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 347 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 348 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 349 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 350 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 351 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 352 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 353 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 354 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 355 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 356 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 357 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 358 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 359 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 360 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 361 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 362 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 363 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 364 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 365 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 366 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 367 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 368 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 369 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 370 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 371 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 372 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 373 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 374 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 375 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 376 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 377 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 378 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 379 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 380 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 381 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 382 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 383 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 384 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 385 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 386 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 387 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 388 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 389 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 390 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 391 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 392 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 393 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 394 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 395 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 396 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 397 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 398 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 399 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 400 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 401 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 402 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 403 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 404 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 405 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 406 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 407 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 408 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 409 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 410 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 411 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 412 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 413 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 414 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 415 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 416 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 417 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 418 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 419 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 420 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 421 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 422 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 423 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 424 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 425 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 426 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 427 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 428 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 429 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 430 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 431 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 432 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 433 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 434 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 435 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 436 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 437 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 438 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 439 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 440 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 441 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 442 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 443 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 444 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 445 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 446 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 447 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 448 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 449 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 450 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 451 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 452 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 453 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 454 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 455 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 456 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 457 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 458 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 459 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 460 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 461 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 462 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 463 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 464 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 465 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 466 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 467 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 468 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 469 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 470 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 471 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 472 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 473 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 474 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 475 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 476 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 477 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 478 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 479 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 480 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 481 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 482 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 483 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 484 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 485 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 486 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 487 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 488 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 489 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 490 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 491 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 492 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 493 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 494 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 495 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 496 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 497 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 498 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 499 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 500 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 501 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 502 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 503 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 504 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 505 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 506 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 507 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 508 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 509 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 510 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 511 = filler */
};
