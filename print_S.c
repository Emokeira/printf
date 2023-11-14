#include "main.h"

/**
 * print_S - format and print a string, handling non_printable characters
 * @args: HandlerArgs structure containing variable arguments
 *
 * Return: length of the formatted string.
 */

int print_S(HandlerArgs args)

{
	char *str = va_arg(args.output, char *);
	int len = 0;

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			len += snprintf(args.buffer_ptr + len,
		BUFFER_SIZE - len, "\\x%02X", (unsigned char)*str);
		}
		else
		{
			args.buffer_ptr[len++] = *str;
		}
		str++;
	}
	return (len);
}
