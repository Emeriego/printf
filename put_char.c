#include "main.h"
/**
 *put_char - function that prints character to the screen
 *@my_args:variadic arguments
 *Return:the number of characters printed
*/
int put_char(va_list my_args)
{
	char c;

	c = (char) va_arg(my_args, int);
	write(STDOUT_FILENO, &c, 1);

	return (1);
}
