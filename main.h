#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>



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
int _strlenc(const char *s);
int rev_string(char *s);
int put_char(va_list my_args);
int put_str(va_list my_args);
int _putchar(char c);
int _printf(const char *format, ...);
int _printfs_c(const char *format, ...);
int put_character(va_list my_args);
int put_string(va_list my_args);
int put_ptr2(va_list my_args);
int put_str7(va_list my_args);
int put_char7(va_list my_args);
int put_percent7(va_list my_args);
int _printfs(const char *format, ...);
#endif
