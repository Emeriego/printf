#include "main.h"

/**
 * put_octal_number - a function that writes octal integer
 * @args:variadic arguments
 * Return:the number of characters printed
*/
int put_octal_number(va_list my_args)
{
	unsigned int tmp, b, num;
	char binary, *s;

	num = va_arg(my_args, unsigned int);

	if (num == 1 || num == 0)
	{
		binary = '0' + num;
		write(STDOUT_FILENO, &binary, 1);
		return (1);
	}

	tmp = num;

	for (b = 0; tmp != 0; b++)
	{
		tmp = tmp / 8;
	}
	s = helper_o((b), num);
	if (s == NULL)
		return (0);


	b =  write(STDOUT_FILENO, s, b);
	free(s);
	return (b);
}
