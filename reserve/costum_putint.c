#include "main.h"

/**
 * custom_putint - Print an integer
 *
 * @num: The input number
 * Return: The number of characters printed
 */
int custom_putint(int num)
{
	int character_count = 0;

	if (num < 0)
	{
		character_count += put_char('-');
		num = -num;
	}
	if (num / 10 != 0)
	{
		character_count += custom_putint(num / 10);
	}
	character_count += put_char('0' + (num % 10));
	return (character_count);
}
#include "main.h"
/**
 * _putint - print integer
 *
 * @in: input number
 * Return: int
 */
int _putint(int in)
{
	int i = 0;

	if (in < 0)
	{
	i += my_putchar('-');
	in = -in;
	}

	if (in / 10 != 0)
	{
		i += _putint(in / 10);
	}
	i += my_putchar('0' + (in % 10));
	return (i);
}