#include "main.h"
/**
 * conv_num - This Casts a number to the specified size
 * @n: Number to be casted.
 * @size: Number indicating the type to be casted.
 *
 * Return: Casted value of n
 */
long int conv_num(long int n, int size)
{
	if (size == S_LONG)
		return (n);
	else if (size == S_SHORT)
		return ((short)n);
	return ((int)n);
}

