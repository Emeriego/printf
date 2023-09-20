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
    unsigned int inputNum = va_arg(my_args, unsigned int);
    unsigned int maskedNum;

    bitIndex = 0;
    while (bitIndex < 32)
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
        bitIndex++;
    }
    if (count == 0)
    {
        count++;
        _putchar('0');
    }
    return (count);
}
