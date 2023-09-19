#include "main.h"

/**
 * reverse_string - reverses a string with refrance
 * @my_args: variadic arguments
 * Return: the length *s
 */
int reverse_string(va_list my_args)
{
	int length, q;
	char ap;
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

	length = strlen(s) - 1;
	q = 0;
	while (q <= length / 2)
	{
		swap = s[q];
		s[q] = s[length - q];
		s[length - q] = swap;
		q++;
	}

	write(STDOUT_FILENO, s, length + 1);
	free(destin);
	return (length + 1);
}
