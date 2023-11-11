#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct print - Struct for handling format specifiers
 * @t: The format specifier
 * @f: Pointer to the corresponding prrinting function
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);

} print_t;

#define NUM_HANDLERS 2

extern print_t handlers[NUM_HANDLERS];

/* function prototypes for format specifiers */

int _printf(const char *format, ...);
int print_s(va_list output);
int print_c(va_list output);

int _myPuchar(char c);

#endif
