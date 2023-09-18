#include "main.h"


/**
 * _printfs - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list my_args;
	int m, count = 0;

	PrintDescriptor data[] = {
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
			count += data[0].function_pointer(my_args);
			m++;
		}
		else if (*(format + m) == '%' && *(format + m + 1) == 's')
		{
			count += data[1].function_pointer(my_args);
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
