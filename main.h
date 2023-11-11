#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct print
{
	char *t;
	int(*f)(va_list);
}print_t;

#define NUM_HANDLERS 2

extern print_t handlers[NUM_HANDLERS];

int _print(const char *format, ...0;
int print_s(va_list output);
int print_c(va_list ouput);

#endif
