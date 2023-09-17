#include "main.h"

/**
 * put_ptr - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int put_ptr(va_list my_args)
{
	void *ptr;
	char *str = "(nil)";
	long int a;
	int b;
	int i;

	ptr = va_arg(my_args, void*);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = put_hex2_aux(a);
	return (b + 2);
}