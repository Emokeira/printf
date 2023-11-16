#include "main.h"

/**
 * print_c - prints a character
 * @args: Handles arguments conaining va_list and buffer pointer
 *
 * Return: The number of characters printed excluding null bytes
 */

int print_c(va_list args)
{
		int custom_c = va_arg(args, int);
		int c_len = 0;

		_myPutchar(custom_c);
		c_len++;

	return (0);
}
