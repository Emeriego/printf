#include "main.h"
/**
 * put_int - Print an integer
 * @args: The argument list
 *
 * Return: The number of characters printed
 */
int put_int(va_list args)
{
    int num = va_arg(args, int);
    int count = 0;

    if (num < 0)
    {
        count += _putchar('-');
        num = -num;
    }

    if (num / 10 != 0)
    {
        count += put_int(args);
    }
    count += _putchar('0' + (num % 10));

    return count;
}

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list my_args;
    int m, count = 0;

    PrintDescriptor data[] = {
        {"c", put_char},
        {"s", put_str},
        {"d", put_int},  // Add the "d" specifier here
        {"i", put_int}   // Add the "i" specifier here
    };

    va_start(my_args, format);

    if (!format)
        return (-1);

    m = 0;
    while (format && *(format + m))
    {
        if (format[m] == '%' && (!format[m + 1] || format[m + 1] == ' '))
            return (-1);

        for (int i = 0; i < 4; i++)  // Iterate through all specifiers in data
        {
            if (*(format + m) == '%' && *(format + m + 1) == data[i].specifier[0])
            {
                count += data[i].function_pointer(my_args);
                m++;
                break;
            }
        }

        else if (*(format + m) == '%' && *(format + m + 1) == '%')
        {
            count += _putchar('%');
            m++;
        }
        else
        {
            _putchar(*(format + m));
            count++;
        }
        m++;
    }

    va_end(my_args);
    return count;
}