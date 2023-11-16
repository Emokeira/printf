#include "main.h"

/**
 * print_X- Cconverts and prints an unsigned integer to hexadecimal (uppercase)
 * @args: variable argument list containing the unsigned integer
 *
 * Return: Number of characters printed (X_len)
 */

int print_X(va_list args)

{
	unsigned int value = va_arg(args, unsigned int);
	int X_len = 0, i, j, digit;
	char buffer[BUFFER_SIZE];

	do {
		digit = value % 16;
		buffer[i++] = (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
		value /= 16;
	} while (value > 0);

	for (j = i - 1; j >= 0; j--)
	{
		_myPutchar(buffer[j]);
		X_len++;
	}
	return (X_len);
}
