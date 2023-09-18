#include "main.h"
/**
 * put_str - print a string.
 * @my_args: argumen t.
 * Return: returns the length of the string.
 */

int put_str(va_list my_args)
{
	char *str;
	int m, l;

	str = va_arg(my_args, char *);
	if (str == NULL)
	{
		str = "(null)";
		l = _strlen(str);
		for (m = 0; m < l; m++)
			_putchar(str[m]);
		return (l);
	}
	else
	{
		l = _strlen(str);
		for (m = 0; m < l; m++)
			_putchar(str[m]);
		return (l);
	}
}
