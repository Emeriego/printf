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

int put_ptr(va_list my_args);
int put_hex2_aux(unsigned long int num);
int put_hex_aux(unsigned int num);
int put_str_ex(va_list my_args);
int put_hex(va_list my_args);
int put_hex2(va_list my_args);
int put_oct(va_list my_args);
int put_unsign(va_list my_args);
int put_bin(va_list my_args);
int put_str_rev(va_list my_args);
int put_r13(va_list my_args);
int put_int(va_list my_args);
int put_dec(va_list my_args);
int _strlen(char *s);
// int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int put_37(void);
int put_char(va_list my_args);
int put_str(va_list my_args);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
