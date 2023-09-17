#include "main.h"
/**
 * printf_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int put_dec(va_list my_args)
{
	int n = va_arg(my_args, int);
	int num, last_dig = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last_dig < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last_dig = -last_dig;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last_dig + '0');

	return (i);
}