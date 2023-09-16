
#include <stdio.h>
#include "main.h"

int put_str(char *str)
{
    while (*str != '\0')
    {
        put_char(*str);
        str++;
    }
    return (0);   
}