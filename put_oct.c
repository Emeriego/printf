#include "main.h"

/**
 * put_oct - prints an octal number.
 * @my_args: arguments.
 * Return: returns counter.
 */
int put_oct(va_list my_args)
{
	int i;
	int *arr;
	int c = 0;
	unsigned int num = va_arg(my_args, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		c++;
	}
	c++;
	arr = malloc(c * sizeof(int));
	i = 0;
	while (i < c)
	{
		arr[i] = temp % 8;
		temp /= 8;
		i++;
	}
	for (i = c - 1; i >= 0; i--)
		_putchar(arr[i] + '0');
	free(arr);
	return (c);
}
