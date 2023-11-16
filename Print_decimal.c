#include "main.h"

/**
 * print_d - Prints a decimal (int) number
 * @args: Handles arguments containing va_list and buffer pointer
 *
 * Return: The number of characters printed excluding null bytes
 */

int print_d(va_list args)
{
	int num_d = va_arg(args, int);
	int num_len = 0;

	if (num_d < 0)
	{
		num_d = -num_d;
		num_len++;
	}
	if (num_d == 0)
	{
		_myPutchar('0');
		num_len++;
	}
	else
	{
		while (num_d > 0)
		{
			num_d /= 10;
			num_len++;
		}
	}
	return (num_len);
}
/**
 * print_i - Prints an integer number
 * @args: Handles arguments containing Va_list and buffer pointer
 *
 * Return: The number of characters printed excluding null bytes
 **/

int print_i(va_list args)

{
	int num_d = va_arg(args, int);
	int num_len = 0;

	if (num_d < 0)
	{
		num_d = -num_d;
		num_len++;
	}
	if (num_d == 0)
	{
		_myPutchar('0');
		num_len++;
	}
	else
	{
		while (num_d > 0)
		{
			num_d /= 10;
			num_len++;
		}
	}
	return (num_len);
}

