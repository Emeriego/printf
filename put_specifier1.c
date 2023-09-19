#include "main.h"
/**
 * put_specifier1 - a function that checks if there is a
 * specifier in the format
 * @specifics: array of structs containing different conversion specifiers
 * @format: pointer to an array containing the string of chars to be handled
 *
 * Return: -1 in case of reaching the end of format or if
 * format starts with '%' followed by a null character, (q)
 * in case of finding a match to the specifier
 */

int put_specifier1(c_specifier specifics[], char *format)
{
	int q;
	char fchar;

	q = 0;
	if (format[q] == '%')
	{
		if (format[q + 1] == '\0')
		{
			return (-1);
		}
		fchar = format[q + 1];
		q = 0;
		while (q < 3)
		{
			if (specifics[q].sp == fchar)
				return (q);
			q++;
		}
	}
	return (-2);
}
