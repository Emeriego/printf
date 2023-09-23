#include "main.h"

/**
 * put_non_putable - Prints ascii codes in hexa of non printable chars
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int put_non_putable(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int i = 0, off = 0;
	char *str = va_arg(types, char *);

	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	if (str == NULL)
	{
		return (write(1, "(null)", 6));
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (putable(str[i]))
			buffer[i + off] = str[i];
		else
			off += put_hex_code(str[i], buffer, i + off);
	}
	buffer[i + off] = '\0';
	return (write(1, buffer, i + off));
}
