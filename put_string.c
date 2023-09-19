#include "main.h"

/**
 * put_string - write a string to the standard oupute
 * @my_args:variadic arguments
 * Return: the number of characters printed
 */
int put_string(va_list my_args)
{
	int length;
	char *string;

	string = va_arg(my_args, char*);
	if (string == NULL)
	{
		string = "(null)";
	}
	length = strlen(string);
	write(STDOUT_FILENO, string, length);
	return (length);
}
