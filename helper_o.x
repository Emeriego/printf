#include "main.h"

/**
 * helper_o - a function that helps
 * @bcount: count
 * @num: num
 * Return:nothing
*/
char *helper_o(int bcount, unsigned int num)
{
	int r, q;
	char binary, *s;

	s  = malloc(sizeof(char) * bcount + 1);
	if (s == NULL)
		return (s);
	for (q = bcount - 1; q != -1; q--)
	{
		r = num % 8;
		binary = r + '0';
		s[q] = binary;
		num = num / 8;
	}

	s[0] = binary;
	if (s[0] == '0')
		s[0] = '1';
	s[bcount] = '\0';

	return (s);
}
