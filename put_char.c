#include "main.h"
/**
 * put_char - Prints a char
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int put_char(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char ch = va_arg(types, int);

	return (putchar_handler(ch, buffer, flags, width, precision, size));
}
