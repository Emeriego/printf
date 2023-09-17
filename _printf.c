#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	c_specifier spec[] = {
		{"%s", put_str}, {"%c", put_char},
		{"%i", put_int}, {"%d", put_dec}, {"%r", put_str_rev},
		{"%R", put_r13}, {"%b", put_bin}, {"%u", put_unsign},
		{"%o", put_oct}, {"%x", put_hex2}, {"%X", put_hex},
		{"%S", put_str_ex}, {"%p", put_ptr}
	};

	va_list my_args;
	int q = 0, w, l = 0;

	va_start(my_args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Repeat_this:
	while (format[q] != '\0')
	{
		w = 12;
		while (w >= 0)
		{
			if (spec[w].specifier[0] == format[q] && spec[w].specifier[1] == format[q + 1])
			{
				l += spec[w].function_pointer(my_args);
				q = q + 2;
				goto Repeat_this;
			}
			w--;

		}
		_putchar(format[q]);
		l++;
		q++;
	}
	va_end(my_args);
	return (l);
}
