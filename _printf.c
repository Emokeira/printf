#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 **/

int _printf(const char *format, ...)

{
	va_list output;

	char buffer[BUFFER_SIZE];
	size_t buff_len = 0;
