#include "main.h"

/**
 * print_s - Prints a string
 * @output: A va_list containing the string to be printed
 *
 * Return: The number of characters printed(excluding null byte).
 */

int print_s(va_list output)
{
	char *str = va_arg(output, char);

	if (str == NULL)
		return (write(1, "(nil)", 5));
	else
		return (write(1, str, strlen(str)));
}

/**
 * print_c - Prints a character
 * @output: A va_list containing the character to be printed
 *
 * Return: The number of characters printed(excluding null byte)
 */

int print_c(va_list output)
{
	char custom_c = va_arg(output, int);

	return (_myPutchar(custom_c));
}
