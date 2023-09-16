#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int printed_chars = 0;  // To keep track of the number of characters printed

    while (*format)
    {
        if (*format == '%')
        {
            format++;  // Move past '%'
            char specifier = *format;
            switch (specifier)
            {
                case 'c':
                {
                    char c = va_arg(args, int);  // 'c' is promoted to int
                    write(1, &c, 1);  // Print the character
                    printed_chars++;
                    break;
                }
                case 's':
                {
                    const char *str = va_arg(args, const char *);
                    int len = 0;
                    while (str[len])
                        len++;
                    write(1, str, len);  // Print the string
                    printed_chars += len;
                    break;
                }
                case '%':
                    write(1, "%", 1);  // Print a single '%'
                    printed_chars++;
                    break;
                default:
                    break;  // Handle other format specifiers as needed
            }
        }
        else
        {
            write(1, format, 1);  // Print non-format specifier characters
            printed_chars++;
        }
        format++;  // Move to the next character in the format string
    }

    va_end(args);
    return printed_chars;
}
