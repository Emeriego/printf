#include "main.h"
/**
 * dig - Verifies a digit
 * @ch: Char to be evaluated
 *
 * Return: returns 1 if c is a digit, 0 otherwise
 */
int dig(char ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);

	return (0);
}

