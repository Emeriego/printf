#include "main.h"
/**
 * run_put - Prints an argument based on its type
 * @fmt: Formatted string in which to print the arguments.
 * @my_args: my_args of arguments to be printed.
 * @ind: ind.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: returns 1 or 2;
 */
int run_put(const char *fmt, int *ind, va_list my_args, char buffer[],
	int flags, int width, int precision, int size)
{
	int i, x_len = 0, characters = -1;
	my_format format_specs[] = {
		{'c', put_char}, {'s', put_str}, {'%', put_percent},
		{'i', put_int}, {'d', put_int}, {'b', put_bin},
		{'u', put_unsign}, {'o', put_oct}, {'x', put_hex_dec},
		{'X', put_hx_up}, {'p', put_ptr}, {'S', put_non_putable},
		{'r', put_rev}, {'R', put_r13}, {'\0', NULL}
	};

	i = 0;
	while (format_specs[i].fmt != '\0')
	{
		if (fmt[*ind] == format_specs[i].fmt)
			return (format_specs[i].fn(my_args, buffer, flags, width, precision, size));
		i++;
	}
	if (format_specs[i].fmt == '\0')
	{
		if (fmt[*ind] == '\0')
			return (-1);
		x_len += write(1, "%%", 1);
		if (fmt[*ind - 1] == ' ')
			x_len += write(1, " ", 1);
		else if (width)
		{
			--(*ind);
			while (fmt[*ind] != ' ' && fmt[*ind] != '%')
				--(*ind);
			if (fmt[*ind] == ' ')
				--(*ind);
			return (1);
		}
		x_len += write(1, &fmt[*ind], 1);
		return (x_len);
	}
	return (characters);
}
