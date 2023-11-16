#include "main.h"

int print_X(va_list args)

{
	unsigned int value = va_arg(args, unsigned int);
	int X_len = 0, i, j, digit;
	char buffer[BUFFER_SIZE];

	do 
	{
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
