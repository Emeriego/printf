#include "main.h"
/**
 * put_unsign - prints integer
 * @my_args: argument to print
 * Return: number of characters printed
 */
int put_unsign(va_list my_args)
{
	unsigned int n = va_arg(my_args, unsigned int);
	int num, last_dig = n % 10, digit, x = 1;
	int  i = 1;

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
			x = x * 10;
			num = num / 10;
		}
		num = n;
		while (x > 0)
		{
			digit = num / x;
			_putchar(digit + '0');
			num = num - (digit * x);
			x = x / 10;
			i++;
		}
	}
	_putchar(last_dig + '0');

	return (i);
}