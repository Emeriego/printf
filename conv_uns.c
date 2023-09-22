#include "main.h"
/**
 * conv_uns - This Casts a number to the specified size
 * @n: Number to be casted
 * @size: Number indicating the type to be casted
 *
 * Return: returns value of num
 */
long int conv_uns(unsigned long int n, int size)
{
	if (size == S_LONG)
		return (n);
	else if (size == S_SHORT)
		return ((unsigned short)n);

	return ((unsigned int)n);
}
