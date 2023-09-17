#include "main.h"

/**
 * put_hex2 - prints an hexgecimal number.
 * @my_args: arguments.
 * Return: counter.
 */
int put_hex2(va_list my_args)
{
	int i;
	int *arr;
	int c = 0;
	unsigned int num = va_arg(my_args, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		c++;
	}
	c++;
	arr = malloc(c * sizeof(int));

	for (i = 0; i < c; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}
	for (i = c - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (c);
}