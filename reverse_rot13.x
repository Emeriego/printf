#include "main.h"

/**
 * rev_rot13 - This function encodes a string into ROT13.
 * The function uses the va_list type from <stdarg.h> to handle a variable number of arguments.
 *
 * @args: Va_list for the variadic function. 
 * Returns: The length of the encoded string, or 0 if either the input
 * string is NULL or memory allocation failed.
 */
int rev_rot13(va_list my_args)
{
	int length;
	char *destin, *s;

	s = va_arg(my_args, char*);
	if (s == NULL)
		return (0);
	destin = malloc(strlen(s) * sizeof(char) + 1);
	if (!destin)
		return (0);

	s = _strcpy(destin, s);
	if (s == NULL)
		return (0);
	rot13(s);
	length = strlen(s);
	write(STDOUT_FILENO, s, length);
	free(destin);
	return (length);
}