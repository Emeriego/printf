#ifndef MAIN_H
#define MAIN_H

//predefines liberaries
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct printer - Struct printer
 *
 * @c: The operator
 * @f_pr: The function associated
 */
typedef struct printer
{
	char *c;
	void (*f_ptr)(va_list args);
} printer;

int c_putchar(char c);
int _printf(const char *format, ...);
#endif