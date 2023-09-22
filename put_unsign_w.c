#include "main.h"

/**
 * put_unsign_w - Writes an unsigned number
 * @is_negative: Number indicating if the num is negative
 * @ind: Index at which the number starts in the buffer
 * @buffer: Array of chars
 * @flags: Flags specifiers
 * @width: Width specifier
 * @precision: Precision specifier
 * @size: Size specifier
 *
 * Return: returns Number of written chars.
 */
int put_unsign_w(int is_negative, int ind,
	char buffer[],
	int flags, int width, int precision, int size)
{
	int b = BUFF_SIZE - ind - 1, i = 0;
	char space_pad = ' ';

	UNUSED(is_negative);
	UNUSED(size);

	if (precision == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
		return (0);
	if (precision > 0 && precision < b)
		space_pad = ' ';
	while (precision > b)
	{
		buffer[--ind] = '0';
		b++;
	}

	if ((flags & F_ZERO) && !(flags & F_MINUS))
		space_pad = '0';

	if (width > b)
	{
		for (i = 0; i < width - b; i++)
			buffer[i] = space_pad;

		buffer[i] = '\0';

		if (flags & F_MINUS)
		{
			return (write(1, &buffer[ind], b) + write(1, &buffer[0], i));
		}
		else
		{
			return (write(1, &buffer[0], i) + write(1, &buffer[ind], b));
		}
	}
	return (write(1, &buffer[ind], b));
}
