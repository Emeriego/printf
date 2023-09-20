#include "main.h"

/**
 * put_hex - prints an hexadecimal number.
 * @args: arguments.
 * Return: digit_count.
 */
int put_hex(va_list my_args)
{
    int idx;
    int *hex_values;
    int digit_count = 0;
    unsigned int number = va_arg(my_args, unsigned int);
    unsigned int temp_number = number;

    while (number / 16 != 0)
    {
        number /= 16;
        digit_count++;
    }
    digit_count++;
    hex_values = malloc(digit_count * sizeof(int));

    for (idx = 0; idx < digit_count; idx++)
    {
        hex_values[idx] = temp_number % 16;
        temp_number /= 16;
    }
    for (idx = digit_count - 1; idx >= 0; idx--)
    {
        if (hex_values[idx] > 9)
            hex_values[idx] = hex_values[idx] + 7;
        _putchar(hex_values[idx] + '0');
    }
    free(hex_values);
    return (digit_count);
}
