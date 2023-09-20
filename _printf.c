#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: returns the length of the string.
 */
int _printf(const char *format, ...)
{
	c_specifier spec[] = {
		{"%s", put_str}, {"%c", put_character},
		{"%i", put_int}, {"%d", put_dec}, {"%r", put_str_rev},
		{"%R", put_r13}, {"%b", put_bin}, {"%u", put_unsign},
		{"%o", put_oct}, {"%x", put_hex2}, {"%X", put_hex},
		{"%S", put_str_ex}, {"%p", put_ptr2}, {"%%", put_percent7}
	};

	va_list my_args;
	int q = 0, w, spec_found, len = 0;

	va_start(my_args, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format && *(format + q))
	{
		spec_found = 0;
		for (w = 0; w <= 13; w++)
		{
			if (format[q] == '%' && (!format[q + 1] || format[q + 1] == ' '))
				return (-1);
			else if (spec[w].sp[0] == format[q] && spec[w].sp[1] == format[q + 1])
			{
				len += spec[w].f_ptr(my_args);
				q = q + 2;
				spec_found = 1;
				break;
			}
		}
		if (!spec_found)
		{
			_putchar(format[q]);
			len++;
		}
		q++;
	}
	va_end(my_args);
	return (len);
}