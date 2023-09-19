#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
static void put_flag(const char **format, va_list my_args, int *l)
{
    char flags = 0;
    char format_char = **format;

    
    while (format_char == '+' || format_char == ' ' || format_char == '#') {
        if (format_char == '+') {
            flags |= 1;
        } else if (format_char == ' ') {
            flags |= 2;
        } else if (format_char == '#') {
            flags |= 4;
        }
        (*format)++;
        format_char = **format;
    }

    if (flags & 1) { 
        
        _putchar('+');
        (*l)++;
    } else if (flags & 2) { 
        
        _putchar(' ');
        (*l)++;
    } else if (flags & 4) {
        if (format_char == 'o') {
            _putchar('0');
            (*l)++;
        } else if (format_char == 'x' || format_char == 'X') {
            _putchar('0');
            _putchar(format_char);
            (*l) += 2;
        }
    }
}
