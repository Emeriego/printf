#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the null byte, to the buffer pointed to by dest
 * @dest: pointer to the destination string where the content is to be copied
 * @src: pointer to the source of string which is to be copied
 *
 * Return: a pointer to the destination string 'dest'.
 */
char *_strcpy(char *dest, char *src)
{
	int q;

	for (q = 0; src[q] != '\0'; q++)
	{
		dest[q] = src[q];
	}
	dest[q] = src[q];
	return (dest);
}
