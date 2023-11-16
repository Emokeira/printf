#include "main.h"

/**
 * print_o - converts and prints an unsigned integer to octal
 * @args: variable argument list containing the unsigned integer
 *
 * Return: Number of characters printed (o_len)
 */

int print_o(va_list args)

{
	unsigned int octal = va_arg(args, unsigned int);
	int o_len = 0, a = 0, b, digit_value;
	char buffer[BUFFER_SIZE];

	do {
		digit_value = octal % 8;
		buffer[a++] = '0' + digit_value;
		octal /= 8;
	} while (octal > 0);

	for (b = a - 1; b >= 0; b--)
	{
		_myPutchar(buffer[b]);
		o_len++;
	}
	return (o_len);
}
