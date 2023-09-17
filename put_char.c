#include "main.h"

/**
 * put_char - costum putchar
 * @c: character count
 * Return: write(1,&c,1)
 */

int put_char(char c)
{
	return (write(1, &c, 1));
}
