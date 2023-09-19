int put_string(va_list args);
int put_char(va_list args);
int put_specifier(va_list args);
int put_specifier(specifier_t spacifiers[], char *format);
int _printf(const char *format, ...);
char *_strcpy(char *dest, char *src);
char *rot13(char *src);
int put_rot13(va_list args);
int put_decimal(va_list args);
char *helper(int bcount, unsigned int num);
int put_binary_number(va_list args);
char *helper_X(int bcount, unsigned int num);
int put_heX_number(va_list args);
char *helper_o(int bcount, unsigned int num);
int put_octal_number(va_list args);
int put_unsigned_decimal(va_list args);
char *helper_x(int bcount, unsigned int num);
int put_hex_number(va_list args);
char *helper_XS(int bcount, unsigned int num);
int put_S(va_list args);
char *helper_xP(int bcount, unsigned long num);
int put_P(va_list args);












#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct specifier - Struct specifier
 *
 * @s: specifier char
 * @f: function to deal with this specifier
 */
typedef struct specifier
{
	char s;
	int (*f)(va_list args);
} specifier_t;
int _printf(const char *format, ...);
int write_decimal(va_list args);
int write_binary_number(va_list args);
int write_octal_number(va_list args);
int rev_string(va_list args);
char *_strcpy(char *dest, char *src);
int rev_rot13(va_list args);
int write_unsigned_decimal(va_list args);
int write_hex_number(va_list args);
int write_heX_number(va_list args);
int write_S(va_list args);
char *helper_X(int bcount, unsigned int num);
int write_P(va_list args);
#endif /* MAIN_H */