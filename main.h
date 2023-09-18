#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct PrintFunction - print data
 * @sp: character.
 * @f_ptr: function pointer
 */
typedef struct PrintFunction
{
	char *sp;
	int (*f_ptr)(va_list my_args);
} c_specifier;

int put_string(va_list my_args);
int put_char(va_list my_args);
int put_specifier(va_list my_args);
int put_specifier(c_specifier spacifiers[], char *format);
int _printf(const char *format, ...);
char *_strcpy(char *dest, char *src);
char *rot13(char *src);
int put_rot13(va_list my_args);
int put_decimal(va_list my_args);
char *helper(int bcount, unsigned int num);
int put_binary_number(va_list my_args);
char *helper_X(int bcount, unsigned int num);
int put_heX_number(va_list my_args);
char *helper_o(int bcount, unsigned int num);
int put_octal_number(va_list my_args);
int put_unsigned_decimal(va_list my_args);
char *helper_x(int bcount, unsigned int num);
int put_hex_number(va_list my_args);
char *helper_XS(int bcount, unsigned int num);
int put_S(va_list my_args);
char *helper_xP(int bcount, unsigned long num);
int put_P(va_list my_args);

#endif