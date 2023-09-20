#include "main.h"

/**
 * put_bin - Prints an unsigned number
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Numbers of char printed.
 */
int put_bin(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	unsigned int n, m, i, sum;
	unsigned int alpha[32];
	int count;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	n = va_arg(types, unsigned int);
	m = 2147483648;
	alpha[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		alpha[i] = (n / m) % 2;
	}
	i = 0, sum = 0, count = 0;
	while (i < 32)
	{
		sum += alpha[i];
		if (sum || i == 31)
		{
			char z = '0' + alpha[i];

			write(1, &z, 1);
			count++;
		}
		i++;
	}
	return (count);
}

