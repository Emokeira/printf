#include "main.h"

/**
 * print_x - converts and prints an unsigned integer to hexadecimal(lowercase)
 * @args: variable argument list containing the unsigned integer
 *
 * Return: Number of characters printed (x_len)
 */

int print_x(va_list args)

{
	unsigned int value = va_arg(args, unsigned int);
	int x_len = 0, i, digit, j;
	char buffer[BUFFER_SIZE];

	do {
		digit = value % 16;
		buffer[i++] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
		value /= 16;
	} while (value > 0);

	for (j = i - 1; j >= 0; j--)
	{
		_myPutchar(buffer[j]);
		x_len++;
	}
	return (x_len);
}
