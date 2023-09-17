#include "main.h"
/**
 * put_r13 - printf str to ROT13 place into buffer
 * @my_args: type struct va_arg where is allocated printf arguments
 * Return: returns counter
 *
 */
int put_r13(va_list my_args)
{
	int i, j, c = 0;
	int k = 0;
	char *str = va_arg(my_args, char*);
	char alphabets[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char r_alphabets[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; alphabets[j] && !k; j++)
		{
			if (str[i] == alphabets[j])
			{
				_putchar(r_alphabets[j]);
				c++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			c++;
		}
	}
	return (c);
}