#include "main.h"

/**
 * put_heX_number- a function that writes signed hexadecimal integer
 * @my_args:variadic arguments
 * Return:the number of characters printed
*/
int put_heX_number(va_list my_args)
{
	unsigned int temp, z, num;
	char binary, *s;

	num = va_arg(my_args, unsigned int);

	if (num == 1 || num == 0)
	{
		binary = '0' + num;
		write(STDOUT_FILENO, &binary, 1);
		return (1);
	}

	temp = num;

	for (z = 0; temp != 0; z++)
	{
		temp = temp / 16;
	}

	s = helper_X((z), num);
	if (s == NULL)
		return (0);


	z =  write(STDOUT_FILENO, s, z);
	free(s);
	return (z);
}
