#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

#define BUFFER_SIZE 1024

/**
 * struct HandlerArgs - Struct for handler function arguments
 * @output: va_list conatiang the arguments
 * @buffer_ptr: Pointers to the buffer for formatted output
 * @buffer_start: Pointer to the start of the buffer
 **/
typedef struct HandlerArgs
{
	va_list output;
	char *buffer_ptr;
	char *buffer_start;
} HandlerArgs;

/**
 * struct print - Struct for handling format specifiers
 * @t: The format specifier
 * @f: Pointer to the corresponding prrinting function
 **/

typedef struct print
{
	char *t;
	int (*f)(va_list args);

} print_t;

int handle_s(char specifier, va_list args, char *buffer, int *buf_len);

/* function prototypes for format specifiers */

int print_percent(va_list args);
int print_s(va_list args);
int print_c(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_u(va_list args);
int print_b(va_list args);
int print_o(va_list args);
int print_x(va_list args);
int print_X(va_list args);
int print_S(va_list args);
int print_p(va_list args);

void reverseDigits(char *buffer, int length);
int _printf(const char *format, ...);

int _myPutchar(char c);

#endif
