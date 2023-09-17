#include "main.h"

/**
 * put_bin - prints binary numbers.
 * @my__args: arguments.
 * Return: count.
 */
int put_bin(va_list my_args)
{
    int isBitSet = 0;
    int count = 0;
    int bitIndex, singleBit = 1, binaryDigit;
    unsigned int inputNum = va_arg(input_args, unsigned int);
    unsigned int maskedNum;

    for (bitIndex = 0; bitIndex < 32; bitIndex++)
    {
        maskedNum = ((singleBit << (31 - bitIndex)) & inputNum);
        if (maskedNum >> (31 - bitIndex))
            isBitSet = 1;
        if (isBitSet)
        {
            binaryDigit = maskedNum >> (31 - bitIndex);
            _putchar(binaryDigit + 48);
            count++;
        }
    }
    if (count == 0)
    {
        count++;
        _putchar('0');
    }
    return (count);
}