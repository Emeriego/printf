#include "main.h"
/**
 * put_ptr2 - Print a pointer address without leading zeros
 * @my_args: A va_list containing the pointer to be printed
 *
 * Return: Number of characters printed
 */
int put_ptr2(va_list my_args)
{
	char hex_digit;
	void *ptr = va_arg(my_args, void *);
	unsigned long int address = (unsigned long int)ptr;
	char *hex_digits = "0123456789abcdef";
	int shift;
	int count = 0;
	int non_zero_found = 0;

	count += _putchar('0');
	count += _putchar('x');

	if (ptr == NULL)
	{
		count += _putchar('0');
	}
	else
	{
		for (shift = (sizeof(void *) * 8) - 4; shift >= 0; shift -= 4)
		{
			hex_digit = hex_digits[(address >> shift) & 0xf];
			if (hex_digit != '0' || non_zero_found)
			{
				count += _putchar(hex_digit);
				non_zero_found = 1;
			}
		}
	}

	if (!non_zero_found)
	{
		count += _putchar('0');
	}
	return (count);
}
