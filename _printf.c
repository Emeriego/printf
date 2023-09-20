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
	int q = 0, w, spec_found, l = 0;

	va_start(my_args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[q] != '\0')
	{
		spec_found = 0;
		for (w = 13; w >= 0; w--)
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

/**
 * _printfs - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printfs(const char *format, ...)
{
	va_list my_args;
	int m, count = 0;

	c_specifier spec[] = {
		{"c", put_char},
		{"s", put_str}
	};
	va_start(my_args, format);
	if (!format)
		return (-1);
	m = 0;
	while (format && *(format + m))
	{
		if (format[m] == '%' && (!format[m + 1] || format[m + 1] == ' '))
			return (-1);

		else if (*(format + m) == '%' && *(format + m + 1) == 'c')
		{
			count += spec[0].f_ptr(my_args);
			m++;
		}
		else if (*(format + m) == '%' && *(format + m + 1) == 's')
		{
			count += spec[1].f_ptr(my_args);
			m++;
		}
		else if (*(format + m) == '%' && *(format + m + 1) == '%')
		{
			count += _putchar('%');
			m++;
		}
		else
		{
			_putchar(*(format + m));
			count++;
		}
		m++;
	}
	va_end(my_args);
	return (count);
}
