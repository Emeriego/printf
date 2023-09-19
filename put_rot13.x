#include "main.h"

/** 
 * put_rot13 This function takes a string and applies the ROT13 cipher to it
 *
 * @src: It's the string that you want to encrypt via ROT13.
 * Expected to be a null-terminated string.
 * Returns: The function returns the source string, encoded in ROT13.
 */
char put_rot13(char *src)
{
	int q;

	for (q = 0; src[q] != '\0'; q++)
	{
		while (((src[q] >= 'a') && (src[q] <= 'z'))
		|| ((src[q] >= 'A') && (src[q] <= 'Z')))
		{
			if (((src[q] >= 'a') && (src[q] <= 'm'))
			|| ((src[q] >= 'A') && (src[q] <= 'M')))
			{
				src[q] = src[q] + 13;
				break;
			}
			src[q] = src[q] - 13;
			break;
		}
		
	}
	return (src);
}
