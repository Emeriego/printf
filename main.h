#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct PrintFunction - print data
 * @specifier: character.
 * @function_pointer: function pointer
 */
typedef struct PrintFunction
{
	char *specifier;
	int (*function_pointer)(va_list my_args);
} c_specifier;

int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int put_hex_aux(unsigned int value);
int printf_exclusive_string(va_list val);
int put_hex(va_list my_args);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int put_bin(va_list input_args);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int put_char(va_list my_args);
int put_str(va_list my_args);
int _putchar(char c);
int _printf(const char *format, ...);

#endif