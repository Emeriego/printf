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
	int q = 0, w, spec_found, l = 0;

	va_start(my_args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[q] != '\0')
	{
		spec_found = 0;
		for (w = 12; w >= 0; w--)
		{
			if (spec[w].sp[0] == format[q] && spec[w].sp[1] == format[q + 1])
			{
				l += spec[w].f_ptr(my_args);
				q = q + 2;
				spec_found = 1;
				break;
			}
		}
		if (!spec_found)
		{
			_putchar(format[q]);
			l++;
			q++;
		}
	}
	va_end(my_args);
	return (l);
}
