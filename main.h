#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct PrintFunction - print data
 * @specifier: character.
 * @function_pointer: function pointer
 */
typedef struct PrintFunction
{
	char *specifier;
	int (*function_pointer)(va_list my_args);
} PrintDescriptor;


int _printf(const char *format, ...);
int _putchar(char c);
int put_str(va_list my_args);
int put_char(va_list my_args);
int custom_putint(int num);
int put_int(va_list, my_args);
#endif
