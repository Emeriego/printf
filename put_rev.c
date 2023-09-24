#include "main.h"

/**
 * put_rev - Prints reverse string.
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: returns Numbers of chars printed
 */

int put_rev(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char z;
	char *str;
	int i, count = 0;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(size);

	str = va_arg(types, char *);

	if (str == NULL)
	{
		UNUSED(precision);
		str = "(Null)";
	}
	for (i = 0; str[i]; i++)
		;
	i = i - 1;
	while (i >= 0)
	{
		z = str[i];
		write(1, &z, 1);
		count++;
		i--;
	}
	return (count);
}
