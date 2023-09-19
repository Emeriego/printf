#include "main.h"

/**
 * put_binary_number- a function that writes signed decimal integer
 * @my_args:variadic arguments
 * Return:the number of characters printed
*/
int put_binary_number(va_list my_args)
{
	unsigned int temp, q, num;
	char binary, *s;

	num = va_arg(my_args, unsigned int);

	if (num == 1 || num == 0)
	{
		binary = '0' + num;
		write(STDOUT_FILENO, &binary, 1);
		return (1);
	}

	temp = num;

	for (q = 0; temp != 0; q++)
	{
		temp = temp / 2;
	}
	s = helper((q), num);
	if (s == NULL)
		return (0);

	q =  write(STDOUT_FILENO, s, q);
	free(s);
	return (q);
}
