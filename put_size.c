#include "main.h"

/**
 * put_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: returns Precision.
 */
int put_size(const char *format, int *i)
{
	int len = *i + 1;
	int size = 0;

	if (format[len] == 'l')
		size = S_LONG;
	else if (format[len] == 'h')
		size = S_SHORT;
	if (size == 0)
		*i = len - 1;
	else
		*i = len;

	return (size);
}
