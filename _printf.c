
#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: returns Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, chars = 0;
	int flags, width, precision, size, b_ind = 0;
	va_list my_args;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(my_args, format);

	for (i = 0; format && format[i] != '\0'; i++)
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
			flags = put_flags(format, &i);
			width = put_width(format, &i, my_args);
			precision = put_precision(format, &i, my_args);
			size = put_size(format, &i);
			++i;
			printed = run_put(format, &i, my_args, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			chars += printed;
		}
	}

	put_buff(buffer, &b_ind);

	va_end(my_args);

	return (chars);
}
