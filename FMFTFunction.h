#ifndef _FMFTFUNCTION_H
#define _FMFTFUNCTION_H

#define USEC(st, fi) (((fi)->tv_sec-(st)->tv_sec)*1000000+((fi)->tv_usec-(st)->tv_usec))

void fmft_sleep(int millcro);
void fmft_log(char* message, ...);
#ifdef _MSC_VER
int gettimeofday(struct timeval *tp, void *tzp);
#endif
void itimeofday(long *sec, long *usec);
unsigned long long iclock64(void);
unsigned int iclock();

#endif
