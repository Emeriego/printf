
#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: returns Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, chars = 0;
	int f, width, precision, size;
	int b_ind = 0, printed = 0;
	char buffer[BUFF_SIZE];
	va_list my_args;

	if (format == NULL)
		return (-1);

	va_start(my_args, format);
	i = 0;
	while (format && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			buffer[b_ind++] = format[i];
			if (b_ind == BUFF_SIZE)
				put_buff(buffer, &b_ind);
			chars++;
		}
		else
		{
			put_buff(buffer, &b_ind);
			f = put_flags(format, &i);
			width = put_width(format, &i, my_args);
			precision = put_precision(format, &i, my_args);
			size = put_size(format, &i);
			++i;
			printed = run_put(format, &i, my_args, buffer,
				f, width, precision, size);
			if (printed == -1)
			{
				return (-1);
			}
			chars += printed;
		}
		i++;
	}
	put_buff(buffer, &b_ind);
	va_end(my_args);
	return (chars);
}
