#include "main.h"

/**
 * print_c - prints a character
 * @args: Handles arguments conaining va_list and buffer pointer
 *
 * Return: The number of characters printed excluding null bytes
 */

int print_c(HandlerArgs args)
{
	if (BUFFER_SIZE - (args.buffer_ptr - args.buffer_start) >= 1)
	{
		char custom_c = va_arg(args.output, int);

		*(args.buffer_ptr++) = custom_c;
		return (1);
	}

	return (-1);
}
