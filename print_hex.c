#include "main.h"

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
