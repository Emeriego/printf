#include "main.h"

/**
 * put_hex_aux - Prints an hexadecimal number.
 * @value: Number to print.
 * Return: digit_count.
 */
int put_hex_aux(unsigned int value)
{
    int iterator;
    int *hex_arr;
    int digit_count = 0;
    unsigned int temp_val = value;
    
    while (value / 16 != 0)
    {
        value /= 16;
        digit_count++;
    }
    digit_count++;
    hex_arr = malloc(digit_count * sizeof(int));
    
    for (iterator = 0; iterator < digit_count; iterator++)
    {
        hex_arr[iterator] = temp_val % 16;
        temp_val /= 16;
    }
    for (iterator = digit_count - 1; iterator >= 0; iterator--)
    {
        if (hex_arr[iterator] > 9)
            hex_arr[iterator] = hex_arr[iterator] + 7;
        _putchar(hex_arr[iterator] + '0');
    }
    free(hex_arr);
    return (digit_count);
}
