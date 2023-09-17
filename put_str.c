
#include <stdio.h>
#include "main.h"

/**
 * put_str - print string
 * @str: for strings
 * Result: 0 when succesful
 */

int put_str(char *str)
{
	while (*str != '\0')
	{
		put_char(*str);
		str++;
	}
	return (0);
}
