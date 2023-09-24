#include "main.h"

/**
 * put_bin - Prints an unsigned number
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: returns Numbers of char printed.
 */
int put_bin(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	unsigned int n, m, i, sum;
	unsigned int alpha[32];
	int c;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	n = va_arg(types, unsigned int);
	m = 2147483648;
	alpha[0] = n / m;
	i = 1;
	while (i < 32)
	{
		m /= 2;
		alpha[i] = (n / m) % 2;
		i++;
	}
	i = 0, sum = 0, c = 0;
	while (i < 32)
	{
		sum += alpha[i];
		if (sum || i == 31)
		{
			char z = '0' + alpha[i];

			write(1, &z, 1);
			c++;
		}
		i++;
	}
	return (c);
}

