#include "main.h"
/**
 * put_oct - Prints an unsigned number in octal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int put_oct(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{

	int b = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_n = num;

	UNUSED(width);
	num = conv_uns(num, size);

	if (num == 0)
	{
		buffer[b--] = '0';
	}

	buffer[BUFF_SIZE - 1] = '\0';
	while (num > 0)
	{
		buffer[b--] = (num % 8) + '0';
		num /= 8;
	}

	if (flags & F_HASH && init_n != 0)
		buffer[b--] = '0';

	b++;
	return (put_unsign_w(0, b, buffer, flags, width, precision, size));
}

