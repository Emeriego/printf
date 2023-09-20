#include "main.h"

/**
 * put_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: returns Precision.
 */
int put_precision(const char *format, int *i, va_list list)
{
	int len = *i + 1;
	int prec = -1;

	if (format[len] != '.')
		return (prec);

	prec = 0;

	len += 1;
	while (format[len] != '\0')
	{
		if (dig(format[len]))
		{
			prec *= 10;
			prec += format[len] - '0';
		}
		else if (format[len] == '*')
		{
			len++;
			prec = va_arg(list, int);
			break;
		}
		else
			break;
		len++;
	}
	*i = len - 1;
	return (prec);
}
