#include "main.h"

/**
 * put_hex2_aux - prints an hexadecimal number.
 * @num: arguments.
 * Return: counter.
 */
int put_hex2_aux(unsigned long int num)
{
	long int i;
	long int *arr;
	long int c = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		c++;
	}
	c++;
	arr = malloc(c * sizeof(long int));
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
