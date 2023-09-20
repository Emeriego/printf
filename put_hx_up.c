#include "main.h"
/**
 * put_hex_up - Prints an unsigned number in upper hexadecimal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: returns Number of chars printed
 */
int put_hex_up(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (put_hex(types, "0123456789ABCDEF", buffer,
		flags, 'X', width, precision, size));
}
