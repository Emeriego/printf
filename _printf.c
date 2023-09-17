#include "main.h"

/**
 * _printf - Custom printf function
 *
 * @format: The format string
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int character_count, m, num;
	char c, *str;
	va_list my_args;

	character_count = 0;
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(my_args, format);
	for (m = 0; format[m] != '\0'; m++)
	{
		if (format[m] != '%')
		{
			put_char(format[m]);
		}
		else if (format[m] == '%' && format[m + 1] == 'c')
		{
			c = va_arg(my_args, int);
			put_char(c);
			m++;
		}
		else if (format[m] == '%' && format[m + 1] == 's')
		{
			str = va_arg(my_args, char *);
			character_count += put_str(str);
			m++;
		}
		else if (format[m] == '%' && format[m + 1] == '%')
			put_char('%');
		else if (format[m + 1] == 'd' || format[m + 1] == 'i')
		{
			num = va_arg(my_args, int);
			character_count += custom_putint(num);
			m++;
		}
		else
		put_char('%');
		character_count++;
	}
	va_end(my_args);
	return (character_count);
}
