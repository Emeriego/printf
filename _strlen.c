#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _strlen(char *str)
{
	int c, i;

	i = 0;
	for (c = 0; str[c] != 0; c++)
		i++;
	return (c);

}
/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 
int _strlenc(const char *s)
{
	int c, i = 0;

	for (c = 0; s[c] != 0; c++)
		i++;
	return (c);
}
*/
