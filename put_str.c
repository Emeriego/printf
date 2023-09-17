#include "main.h"
/**
 * put_str - print a string.
 * @my_args: argumen t.
 * Return: the length of the string.
 */

int put_str(va_list my_args)
{
	char *str;
	int m, counter;

	str = va_arg(my_args, char *);
	if (str == NULL)
	{
		str = "(null)";
		counter = _strlen(str);
		for (m = 0; m < counter; m++)
			_putchar(str[m]);
		return (counter);
	}
	else
	{
		counter = _strlen(str);
		for (m = 0; m < counter; m++)
			_putchar(str[m]);
		return (counter);
	}
}