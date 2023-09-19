#include "main.h"

/**
 * helper_X - a function that helps
 * @bcount: count
 * @num: num
 * Return:nothing
*/
char *helper_X(int bcount, unsigned int num)
{
	int reminder, q;
	char binary, *s;

	s  = malloc(sizeof(char) * bcount + 1);
	if (s == NULL)
		return (s);
	for (q = bcount - 1; q != -1; q--)
	{
		reminder = num % 16;

		if (reminder > 9)
			binary = (reminder - 10) + 'A';
		else
			binary = reminder + '0';
		s[q] = binary;
		num = num / 16;
	}

	s[bcount] = '\0';

	return (s);
}