#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int printed_chars; 
    printed_chars = 0;
     char specifier;

    while (*format)
    {
        if (*format == '%')
        {
            format++;  
            specifier = *format;
            switch (specifier)
            {
                case 'c':
                {
                    char c = va_arg(args, int); 
                    write(1, &c, 1); 
                    printed_chars++;
                    break;
                }
                case 's':
                {
                    const char *str = va_arg(args, const char *);
                    int len = 0;
                    while (str[len])
                        len++;
                    write(1, str, len); 
                    printed_chars += len;
                    break;
                }
                case '%':
                    write(1, "%", 1); 
                    printed_chars++;
                    break;
                default:
                    break;  
            }
        }
        else
        {
            write(1, format, 1);  
            printed_chars++;
        }
        format++;  
    }

    va_end(args);
    return printed_chars;
}
