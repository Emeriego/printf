#include "main.h"
/**
 * put_number - Prints a string
 * @is_neg: Lista of arguments
 * @ind: char types.
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: precision specifier
 * @size: Size specifier
 *
 * Return: returns Number of chars printed.
 */
int put_number(int is_neg, int ind, char buffer[],
	int flags, int width, int precision, int size)
{
	int len = BUFF_SIZE - ind - 1;
	char pad_space = ' ', xtra_c = 0;

	UNUSED(size);

	if ((flags & F_ZERO) && !(flags & F_MINUS))
		pad_space = '0';
	if (is_neg)
		xtra_c = '-';
	else if (flags & F_PLUS)
		xtra_c = '+';
	else if (flags & F_SPACE)
		xtra_c = ' ';

	return (put_num(ind, buffer, flags, width, precision,
		len, pad_space, xtra_c));
}
