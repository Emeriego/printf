#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	c_specifier spec[] = {
		{"%s", put_str},
		{"%c", put_char}
	};

	va_list my_args;
	int w;
	int spec_found;
	int m, count;

	count = 0;
	va_start(my_args, format);
	if (!format)
		return (-1);
	m = 0;
	while (format && *(format + m))
	{
		if (format[m] == '%' && (!format[m + 1] || format[m + 1] == ' '))
			return (-1);

		for (w = 0; w < 14; w++)
		{
			if (format[m] == '%' && format[m + 1] == spec[w].sp[1])
			{
				count += spec[w].f_ptr(my_args);
				m += 2;
				spec_found = 1;
				break;
			}
		}
		if (!spec_found)
		{
			_putchar(format[m]);
			count++;
			m++;
		}
	}
	va_end(my_args);
	return (count);
}
