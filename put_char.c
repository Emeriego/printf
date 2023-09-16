#include "main.h"

int put_char(char c)
{
    return (write(1, &c, 1));   
}