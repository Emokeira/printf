#include "main.h"

/**
 * print_s - Prints a string
 * @args: Handle arguments containing va_list and buffer poiner
 *
 * Return: number of characters printed (excluding the null byte)
 */

int print_s(HandlerArgs args)

{
	char *str = va_arg(args.output, char*);
	size_t str_len, remaining_space;

	if (str == NULL)
	{
		return (write(1, "(nil)", 5));
	}
	else
	{
		str_len = strlen(str);
		remaining_space = BUFFER_SIZE - (args.buffer_ptr - args.buffer_start);

		if (str_len < remaining_space)
		{
			memcpy(args.buffer_ptr, str, str_len);
			args.buffer_ptr += str_len;
			return (str_len);
		}
		else
		{
			memcpy(args.buffer_ptr, str, remaining_space - 1);
			args.buffer_ptr += remaining_space - 1;
			return (-1); /*Buffer overflow, handle accordingly */
		}
	}
}

int print_percent(HandlerArgs args)

{
	if (1 >= BUFFER_SIZE - (args.buffer_ptr - args.buffer_start))
		return (-1);
	*(args.buffer_ptr++) = '%';

	return (1);
}
