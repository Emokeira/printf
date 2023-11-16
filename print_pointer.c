#include "main.h"

int print_p(va_list args)

{
	void *ptr = va_arg(args, void *);
	int p_len = 0, i = 0, digit, j;

	uintptr_t value = (uintptr_t)ptr;
	char buffer[BUFFER_SIZE];

	do
	{
		digit = value % 16;
		buffer[i++] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
		value /= 16;
	} while (value > 0);

	buffer[i++] = 'x';
	buffer[i++] = '0';

	for (j = i - 1; j >= 0; j--)
	{
		_myPutchar(buffer[j]);
		p_len++;
	}

	return (p_len);
}
