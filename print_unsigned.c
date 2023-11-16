#include "main.h"

/**
 * print_u - converts and prints an unsigned integer
 * @args: va_list containing the unsigned integer to be converted
 *
 * Return: Number of characers printed (u_len)
 */

int print_u(va_list args)

{
	unsigned int value = va_arg(args, unsigned int);
	char buffer[BUFFER_SIZE];
	int u_len = 0, i, j;

	if (value == '0')
	{
		_myPutchar('0');
		u_len++;
	}
	else
	{
		while (value > 0)
		{
			buffer[i++] = '0' + value % 10;
			value /= 10;
		}
		for (j = i - 1; j >= 0; j--)
		{
			_myPutchar(buffer[j]);
			u_len++;
		}
	}
	return (u_len);
}

