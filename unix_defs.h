#include <sys/types.h>
#if defined(FUNCPROTO) || defined(__STDC__) || defined(__cplusplus) || defined(c_plusplus)
#ifndef	NULL
#define NULL	((void *) 0)
#endif
#else
#ifndef	NULL
#define NULL	0
#endif
#endif
#ifdef HAVE_MALLOC_H
#include <malloc.h>
#endif

#ifdef _MSC_VER
#define strdup(s) _strdup(s)
#define _CRT_SECURE_NO_WARNINGS
#endif

#if SIZEOF_LONG == SIZEOF_POINTER
#define BIG_INT long
#elif SIZEOF_LONG_LONG == SIZEOF_POINTER
#define BIG_INT long long
#elif SIZEOF_INTPTR_T == SIZEOF_PTR
#define BIG_INT intptr_t
#else
whoops
#endif

#pragma warning (disable:4996) // warning C4996 'sprintf' may be unsafe
