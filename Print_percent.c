#include "main.h"

/**
 * print_percent - Add % character to the buffer if there's space
 * Return: Rturns % if successful and -1 if there's no space.
 */

int print_percent(va_list args)
{
	(void)args;
	_myPutchar('%');

	return (1);
}
