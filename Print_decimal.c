#include "main.h"

/**
 * print_d_i - Prints a decimal (int) number
 * @args: Handles arguments containing va_list and buffer pointer
 *
 * Return: The number of characters printed excluding null bytes
 */

int print_d_i(HandlerArgs args)
{
	int custom_d_i = va_arg(args.output, int);
	int temp = custom_d_i;
	int int_len = (temp < 0) ? 1 : 0;
	int converted_len;

	do {
		temp /= 10;
		int_len++;
	} while (temp != 0);

	if (int_len >= BUFFER_SIZE - (args.buffer_ptr - args.buffer_start))
		return (-1);

	converted_len = snprintf(args.buffer_ptr, BUFFER_SIZE -
			(args.buffer_ptr - args.buffer_start), "%d",  custom_d_i);
	if (converted_len < 0)
		return (-1);

	args.buffer_ptr += converted_len;

	return (converted_len);
}
