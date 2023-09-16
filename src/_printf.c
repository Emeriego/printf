#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
    size_t i, j;
    va_list my_args;


    if (format == NULL || format[0] == '\0')
    {
        return (-1);
    }
    va_start(my_args, format);
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%' || (format[i] == '%' && format[i + 1] == '%'))
        {
            put_char(format[i]);
        }
        else
        {
        switch (format[i])
		{
			case 'c':
				put_char(va_arg(my_args, int));
				break;
			case 's':
				put_str(va_arg(my_args, char *));
				break;
			default:
				break;
		}
        }
    }
    va_end(my_args);
    return (0);
}