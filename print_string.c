#include "main.h"

/**
 * print_s - Prints a string
 * @args: Handle arguments containing va_list and buffer poiner
 *
 * Return: number of characters printed (excluding the null byte)
 */

int print_s(va_list args)

{
	char *str = va_arg(args, char*);
	int str_len = 0;

	if (str != NULL)
	{
		_myPutchar(*str);
		str++;
		str_len++;
	}

	return (str_len);
}
