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
