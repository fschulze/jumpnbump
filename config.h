#ifndef __CONFIG_H
#define __CONFIG_H

#undef DOS

#ifndef DOS
# define LINUX
#endif

#ifdef LINUX
# define NOSOUND
# define JNB_WIDTH 400
# define JNB_HEIGHT 256
#endif

/* 
#define __USE_XOPEN
#define __USE_BSD 
#define __USE_POSIX
*/

#endif
