#include "main.h"

/**
 * putable - Evaluates if a char is printable
 * @ch: Char to be evaluated.
 *
 * Return: returns 1 if c is printable, 0 otherwise
 */
int putable(char ch)
{
	if (ch >= 32 && ch < 127)
		return (1);
	return (0);
}
