#include "main.h"
/**
 * put_str - print a string.
 * @my_args: argumen t.
 * Return: returns the length of the string.
 */

int put_str(va_list my_args)
{
	char *str;
	int m, l;

	str = va_arg(my_args, char *);
	if (str == NULL)
	{
		str = "(null)";
		l = _strlen(str);
		m = 0; 
		while (str[m] != '\0')
		{
            	_putchar(str[m]);
				m++;
		}
		
		return (l);
	}
	else
	{
		l = _strlen(str);
		m = 0;
		while (str[m] != '\0')
		{
			_putchar(str[m]);
			 m++;
		}
		return (l);
	}
}
/** #include "main.h"


 * put_string - Print a string
 * @my_args: The argument list
 *
 * Return: The number of characters in the string (excluding the null byte)
 

int put_string(va_list my_args)
{
	int character_count = 0;
	char *str = va_arg(my_args, char *);

	if (!str)
		str = "(null)";

	while (str[character_count] != '\0')
	{
		_putchar(str[character_count]);
		character_count++;
	}
	return (character_count);
}
*/