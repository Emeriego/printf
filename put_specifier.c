#include "main.h"

/**
 *put_specifier - prints a specifier to the standard output
 *@my_args:variadic arguments
 *Return:the number of characters printed
*/
int put_specifier(va_list my_args)
{
	(void) my_args;
	write(STDOUT_FILENO, "%", 1);

	return (1);
}
