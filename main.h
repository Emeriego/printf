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
	char *sp;
	int (*f_ptr)(va_list my_args);
} c_specifier;


int _printf(const char *format, ...);
int _putchar(char c);
int put_str(va_list my_args);
int put_char(va_list my_args);
#endif
