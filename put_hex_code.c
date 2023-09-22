#include "main.h"
/**
 * put_hex_code - Append ascci in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @i: Index at which to start appending.
 * @ascii_code: ASSCI CODE.
 * Return: returns Always 3
 */
int put_hex_code(char ascii_code, char buffer[], int i)
{
	char map_me[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';
	buffer[i++] = map_me[ascii_code / 16];
	buffer[i] = map_me[ascii_code % 16];

	return (3);
}

