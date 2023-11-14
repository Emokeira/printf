#include "main.h"

/**
 * print_percent - Add % character to the buffer if there's space
 * @args: HandlerArgs structure containing output
 * buffer pointer and beffer start.
 *
 * Return: Rturns % if successful and -1 if there's no space.
 */

int print_percent(HandlerArgs args)
{
	if (BUFFER_SIZE - (args.buffer_ptr - args.buffer_start) >= 1)
	{
		*(args.buffer_ptr++) = '%';
		return (1);
	}

	return (-1);
}
