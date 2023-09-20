#include "main.h"

/**
 * put_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int put_flags(const char *format, int *i)
{
	int j, k, flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	k = *i + 1;
	while (format[k] != '\0')
	{
		j = 0;
		while (FLAGS_CH[j] != '\0')
		{
			if (format[k] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}
			j++;
		}
		if (FLAGS_CH[j] == 0)
			break;
		k++;
	}

	*i = k - 1;

	return (flags);
}

