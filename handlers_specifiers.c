#include "main.h"



/**
 * handle_s - Handles the specified format specifier.
 * @specifier: The format specifier to handle.
 * @args: The va_list of arguments.
 * @buffer: The buffer to store the formatted output.
 * @buf_len: Pointer to the length of the buffer.
 *
 * This function iterates through the registered handlers and invokes the
 * corresponding handler for the given speciefer. It updates the buff
 * and buf_len accordingly.
 *
 * Return: The number of characters written to the buffer, or -1 on failure
 **/

int handle_s(char specifier, va_list args, char *buffer, int *buf_len)

{
	int result_len = 0;

	switch (specifier)
	{
		case 'c':
			result_len = snprintf(buffer + *buf_len,
			BUFFER_SIZE - *buf_len, "%c", va_arg(args, int));
		break;
		case 'd':
		case 'i':
			result_len = snprintf(buffer + *buf_len,
			BUFFER_SIZE - *buf_len, "%d", va_arg(args, int));
		break;
		case 'o':
			result_len = snprintf(buffer + *buf_len,
		BUFFER_SIZE - *buf_len, "%o", va_arg(args, unsigned int));
		break;
		case 'p':
			result_len = snprintf(buffer + *buf_len,
			BUFFER_SIZE - *buf_len, "%p", va_arg(args, void *));
		break;
		case 'u':
			result_len = snprintf(buffer + *buf_len,
		BUFFER_SIZE - *buf_len, "%u", va_arg(args, unsigned int));
		break;
		case 'X':
			result_len = snprintf(buffer + *buf_len,
		BUFFER_SIZE - *buf_len, "%X", va_arg(args, unsigned int));
		break;
		case 'x':
			result_len = snprintf(buffer + *buf_len,
		BUFFER_SIZE - *buf_len, "%x", va_arg(args, unsigned int));
		break;
		case 's':
			result_len = snprintf(buffer + *buf_len,
		BUFFER_SIZE - *buf_len, "%s", va_arg(args, char *));
		break;
		case '%':
			result_len = snprintf(buffer + *buf_len,
				BUFFER_SIZE - *buf_len, "%%");
		break;
		default:
			fprintf(stderr, "%c\n", specifier);
		return (-1);
	}
	if (result_len < 0)
		return (-1);

	*buf_len += result_len;

	if (*buf_len >= BUFFER_SIZE)
	{
		write(1, buffer, *buf_len);
		*buf_len = 0;
	}
	return (result_len);
}
