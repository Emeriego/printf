#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	c_specifier spec[] = {
		{"%s", put_str}, {"%c", put_char},
		{"%i", put_int}, {"%d", put_dec}, {"%r", put_str_rev},
		{"%R", put_r13}, {"%b", put_bin}, {"%u", put_unsign},
		{"%o", put_oct}, {"%x", put_hex2}, {"%X", put_hex},
		{"%S", put_str_ex}, {"%p", put_ptr2}, {"%%", put_percent7}
	};

	va_list my_args;
	int i = 0, j, len = 0;

	va_start(my_args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (spec[j].sp[0] == format[i] && spec[j].sp[1] == format[i + 1])
			{
				len += spec[j].f_ptr(my_args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(my_args);
	return (len);
}