/* confdefs.h */
#define PACKAGE_NAME "libsodium"
#define PACKAGE_TARNAME "libsodium"
#define PACKAGE_VERSION "1.0.15"
#define PACKAGE_STRING "libsodium 1.0.15"
#define PACKAGE_BUGREPORT "https://github.com/jedisct1/libsodium/issues"
#define PACKAGE_URL "https://github.com/jedisct1/libsodium"
#define PACKAGE "libsodium"
#define VERSION "1.0.15"
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define HAVE_PTHREAD 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define __EXTENSIONS__ 1
#define _ALL_SOURCE 1
#define _GNU_SOURCE 1
#define _POSIX_PTHREAD_SEMANTICS 1
#define _TANDEM_SOURCE 1
/* end confdefs.h.  */
#include <time.h>
int
main ()
{
time_t x; int fodder = 0; if (fodder > -1000 && time(&x)) return (int) x
  ;
  return 0;
}
