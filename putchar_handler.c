#include "main.h"

/**
 * putchar_handler - Prints a string
 * @c: char types.
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags.
 * @width: gets width.
 * @precision: precision specifier
 * @size: Size specifier
 *
 * Return: returns Number of chars printed.
 */
int putchar_handler(char c, char buffer[],
	int flags, int width, int precision, int size)
{
	int i = 0;
	char space_pad = ' ';

	UNUSED(precision);
	UNUSED(size);

	if (flags & F_ZERO)
		space_pad = '0';

	buffer[i++] = c;
	buffer[i] = '\0';

	if (width > 1)
	{
		buffer[BUFF_SIZE - 1] = '\0';
		for (i = 0; i < width - 1; i++)
			buffer[BUFF_SIZE - i - 2] = space_pad;

		if (flags & F_MINUS)
			return (write(1, &buffer[0], 1) +
					write(1, &buffer[BUFF_SIZE - i - 1], width - 1));
		else
			return (write(1, &buffer[BUFF_SIZE - i - 1], width - 1) +
					write(1, &buffer[0], 1));
	}

	return (write(1, &buffer[0], 1));
}

