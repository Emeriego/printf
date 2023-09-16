#include "main.h"

int _printf(const char *format, ...)
{
    size_t i;
    int c;
    char *str;
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
            i++;
        switch (format[i])
		{
			case 'c':
                c = va_arg(my_args, int);
				put_char((char)c);
				break;
			case 's':
				str = va_arg(my_args, char *);
                put_str(str);
				break;
			default:
				break;
		}
        }
    }
    va_end(my_args);
    return (0);
}