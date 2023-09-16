#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

    char *str = "Let's try to _printf a simple sentence.\n";
    
    _printf("Character:[%c]\n", 'H');
    _printf("Strings:[%s]\n", str);
    
    return (0);
}