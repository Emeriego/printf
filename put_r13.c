#include "main.h"
/**
 * put_r13 - Print a string in rot13.
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: returns Numbers of chars printed
 */
int put_r13(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char x;
	char *s;
	unsigned int i, j;
	int count = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r_alpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(types, char *);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		{
			if (alpha[j] == s[i])
			{
				x = r_alpha[j];
				write(1, &x, 1);
				count++;
				break;
			}
		}
		if (!alpha[j])
		{
			x = s[i];
			write(1, &x, 1);
			count++;
		}
	}
	return (count);
}

