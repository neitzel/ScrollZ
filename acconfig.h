/*
 * $Id: acconfig.h,v 1.1 1998-09-10 17:31:12 f Exp $
 */

/* define if allow sys/time.h with time.h */
#undef TIME_WITH_SYS_TIME

/* define this if you are using BSD wait union thigs */
#undef BSDWAIT

/* define this if you are using -ltermcap */
#undef USING_TERMCAP

/* define this if you are using -lxtermcap */
#undef USING_XTERMCAP

/* define this if you are using -ltermlib */
#undef USING_TERMLIB

/* define this if signal's return void */
#undef SIGVOID

/* define this if you are using sigaction() instead of signal() */
#undef USE_SIGACTION

/* define this if you are using sigset() instead of signal() */
#undef USE_SIGSET

/* define this if you are using system V (unreliable) signals */
#undef SYSVSIGNALS

/* define this if termcap(3) requires it */
#undef INCLUDE_TERM_H

/* define this if you are using -lcurses, or if termcap(3) requires it */
#undef INCLUDE_CURSES_H

/* define this if wait3() is declared */
#undef WAIT3_DECLARED

/* define this if waitpid() is declared */
#undef WAITPID_DECLARED

/* define this if waitpid() is unavailable */
#undef NEED_WAITPID

/* define this if -lnls exists */
#undef HAVE_LIB_NLS

/* define this if -lnsl exists */
#undef HAVE_LIB_NSL

/* define his if -lPW exists */
#undef HAVE_LIB_PW

/* define this to the mail spool */
#undef MAIL_DIR

/* define this to the name of the AMS mail file */
#undef AMS_MAIL

/* define this if you have scandir() */
#undef HAVE_SCANDIR

/* define this if you have memmove() */
#undef HAVE_MEMMOVE

/* define this if you have setsid() */
#undef HAVE_SETSID

/* define this if you have getsid() */
#undef HAVE_GETSID

/* define this if you have getpgid() */
#undef HAVE_GETPGID

/* define this if your getpgrp() doesn't take a pid argument */
#undef BROKEN_GETPGRP

/* define this if you have sys/select.h */
#undef HAVE_SYS_SELECT_H

/* define this if you have sys/fcntl.h */
#undef HAVE_SYS_FCNTL_H

/* define this if you have fcntl.h */
#undef HAVE_FCNTL_H

/* define this if you have sys/ioctl.h */
#undef HAVE_SYS_IOCTL_H

/* define this if you have sys/file.h */
#undef HAVE_SYS_FILE_H

/* define this if you have sys/time.h */
#undef HAVE_SYS_TIME_H

/* define this if you have sys/wait.h */
#undef HAVE_SYS_WAIT_H

/* define this if you have string.h */
#undef HAVE_STRING_H

/* define this if you have memory.h */
#undef HAVE_MEMORY_H

/* define this if you have netdb.h */
#undef HAVE_NETDB_H

/* define this if you have sys/ptem.h */
#undef HAVE_SYS_PTEM_H

/* define this if you need getcwd() */
#undef NEED_GETCWD 

/* define this if you have hpux version 7 */
#undef HPUX7

/* define this if you have hpux version 8 */
#undef HPUX8

/* define this if you have an unknown hpux version (pre ver 7) */
#undef HPUXUNKNOWN

/* define this if an unsigned long is 32 bits */
#undef UNSIGNED_LONG32

/* define this if an unsigned int is 32 bits */
#undef UNSIGNED_INT32

/* define this if you are unsure what is is 32 bits */
#undef UNKNOWN_32INT

/* define this if you are on a svr4 derivative */
#undef SVR4

/* define this if you are on solaris 2.x */
#undef __solaris__

/* define this if you don't have struct linger */
#undef NO_STRUCT_LINGER

/* define this if you are on svr3/twg */
#undef WINS

/* define this if you need fchmod */
#undef NEED_FCHMOD

/* define this to the location of normal unix mail */
#undef UNIX_MAIL

/* define this to be the name[:port] of the default server */
#undef DEFAULT_SERVER

/* define this if you want to be paranoid */
#undef PARANOID

/* define this if your header files declare sys_errlist */
#undef SYS_ERRLIST_DECLARED

/* define this if you have uname(2) */
#undef HAVE_UNAME

/* define this if you need strerror(3) */
#undef NEED_STRERROR

/* define this if you have ANSI stdarg.h */
#undef HAVE_STDARG_H

/* define this if you have varargs.h */
#undef HAVE_VARARGS_H

/* define this if you have posix strftime(3) */
#undef HAVE_STRFTIME

/* define this if you have posix <termios.h> */
#undef HAVE_TERMIOS_H

/* define this if you have the <termio.h> */
#undef HAVE_TERMIO_H

/* define this if you have the <sgtty.h> */
#undef HAVE_SGTTY_H

/* define this if you have (working) POSIX (O_NONBLOCK) non-blocking */
#undef NBLOCK_POSIX

/* define this if you have BSD (O_NDELAY) non-blocking */
#undef NBLOCK_BSD

/* define this if you have SYSV (FIONBIO) non-blocking */
#undef NBLOCK_SYSV

/* Define this if compiling with SOCKS (the firewall traversal library).
   Also, you must define connect, getsockname, bind, accept, listen, and
   select to their R-versions. */
#undef SOCKS
#undef connect
#undef getsockname
#undef bind
#undef accept
#undef listen
#undef select

/*
 * Are we doing non-blocking connects?  Note:  SOCKS support precludes
 * us from using this feature.
 */
#if (defined(NBLOCK_POSIX) || defined(NBLOCK_BSD) || defined(NBLOCK_SYSV)) && \
	!defined(SOCKS)
# define NON_BLOCKING_CONNECTS
#endif

/* define these to the ZCAT program/args of your choice */
#undef ZCAT
#undef ZSUFFIX
#undef ZARGS

/**************************** PATCHED by Flier ******************************/
/* define this if you have gettimeofday() */
#undef HAVETIMEOFDAY
/****************************************************************************/