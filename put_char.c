#include "main.h"

/**
 * print_char - Print a character
 * @args: The argument list
 *
 * Return: 1 if successful
 */
int print_char(va_list my_args)
{
    char character = va_arg(my_args, int);
    _putchar(character);
    return (1);
}
