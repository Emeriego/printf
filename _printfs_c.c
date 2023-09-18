#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printfs_c(const char *format, ...)
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
