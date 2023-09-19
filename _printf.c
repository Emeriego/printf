#include "main.h"
/**
 * _printf - a function to print a formatted string
 * @format: pointer to an array containing the string of chars to be handled
 *
 * Return: The number of characters printed or -1 if an error occurs.
 */
int _printf(const char *format, ...)
{
	int q, s_index, write_count;
	va_list my_args;

	c_specifier specifics[] = {
	  {'s', put_string}, {'c', put_char},
	  {'%', put_specifier}
	};

	if (format == NULL)
		return (-1);

	va_start(my_args, format);
	write_count = 0;
	for (q = 0; (format != NULL) && (format[q] != '\0'); q++)
	{
		s_index = put_specifier1(specifics, (char *) (format + q));

		if (s_index == -2)
		{
			write(STDOUT_FILENO, (char *) (format + q), 1);
			write_count++;
		}
		else if (s_index == -1)
		{
			return (-1);
		}
		else
		{
			write_count = write_count + specifics[s_index].f_ptr(my_args);
			q++;
		}
	}
	va_end(my_args);
return (write_count);
}
