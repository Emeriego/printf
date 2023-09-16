#include "main.h"  // Include your custom _printf function prototype


int main(void)
{
    int len;
    // Other variables and test cases

    len = _printf("Hello, %s!\n", "world");
    printf("Hello, %s!\n", "world");
    
    // Compare the number of characters printed by both functions
    printf("len = %d\n", len);

    return (0);
}
