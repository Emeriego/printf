#include "main.h"
/**
 * put_hex_dec - Prints an unsigned number in hexadecimal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: returns Number of chars printed
 */
int put_hex_dec(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (put_hex(types, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}

