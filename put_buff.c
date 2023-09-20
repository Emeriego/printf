#include "main.h"
/**
 * put_buff - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @b_ind: Index at which to add next char, represents the length.
 */
void put_buff(char buffer[], int *b_ind)
{
	if (*b_ind >= 1)
	{
		write(1, &buffer[0], *b_ind);
	}

	*b_ind = 0;
}
