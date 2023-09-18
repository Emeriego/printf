#include "main.h"

/**
 * put_str - Print a string
 * @my_args: The argument list
 *
 * Return: The number of characters in the string (excluding the null byte)
 */

int put_str(va_list my_args)
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

    return character_count;
}
