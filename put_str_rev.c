#include "main.h"

/**
 * put_str_rev - function that prints a str in reverse
 * @my_args: type struct va_arg where is allocated printf arguments
 *
 * Return: returns the len.
 */
int put_str_rev(va_list my_args)
{

	char *str = va_arg(my_args, char*);
	int i;
	int j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(str[i]);
	return (j);
}
