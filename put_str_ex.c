#include "main.h"
/**
 * put_str_ex - prints string.
 * @my_args: argument.
 * Return: returns the length of the string.
 */

int put_str_ex(va_list my_args)
{
	char *str;
	int i, l = 0;
	int temp;

	str = va_arg(my_args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			l = l + 2;
			temp = str[i];
			if (temp < 16)
			{
				_putchar('0');
				l++;
			}
			l = l + put_hex_aux(temp);
		}
		else
		{
			_putchar(str[i]);
			l++;
		}
	}
	return (l);
}
