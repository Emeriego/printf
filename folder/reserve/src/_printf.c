#include "main.h"
/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list my_args;
	int m, i, count = 0;

	PrintDescriptor data[] = {
		{"c", put_char},
		{"s", put_str},
		{"d", put_int},
		{"i", put_int}
	};

	va_start(my_args, format);
	if (!format)
		return (-1);
	m = 0;
	while (format && *(format + m))
	{
		if (format[m] == '%' && (!format[m + 1] || format[m + 1] == ' '))
			return (-1);
		for (i = 0; i < 4; i++)
			if (*(format + m) == '%' && *(format + m + 1) == data[i].specifier[0])
			{
				count += data[i].function_pointer(my_args);
				m++;
				break;
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
