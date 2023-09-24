
#include "main.h"

/**
 * put_ptr - Prints the value of a pointer variable
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed.
 */
int put_ptr(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char p = ' ', e = 0;
	int l = 2, ind = BUFF_SIZE - 2, ps = 1;
	unsigned long num_addrs;
	char map_me[] = "0123456789abcdef";
	void *addrs = va_arg(types, void *);

	UNUSED(width);
	UNUSED(size);

	if (addrs == NULL)
		return (write(1, "(null)", 5));

	buffer[BUFF_SIZE - 1] = '\0';
	UNUSED(precision);
	num_addrs = (unsigned long)addrs;

	while (num_addrs > 0)
	{
		buffer[ind--] = map_me[num_addrs % 16];
		num_addrs /= 16;
		l++;
	}

	if ((flags & F_ZERO) && !(flags & F_MINUS))
		p = '0';
	if (flags & F_PLUS)
		e = '+', l++;
	else if (flags & F_SPACE)
		e = ' ', l++;
	ind++;
	return (put_ptr_w(buffer, ind, l,
		width, flags, p, e, ps));
}
