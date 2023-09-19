#include "main.h"

/**
 * helper - a function that helps
 * @bcount: count
 * @num: num
 * Return:nothing
*/
char *helper(int bcount, unsigned int num)
{
	int reminder, q;
	char binary, *s;

	s  = malloc(sizeof(char) * bcount + 1);
	if (s == NULL)
		return (s);
	for (q = bcount - 1; q != -1; q--)
	{
		reminder = num % 2;
		binary = reminder + '0';
		s[q] = binary;
		num = num / 2;
	}
	s[bcount] = '\0';

	return (s);
}
