## A custom _printf function implementation

Writing our own `printf` function, this is a project done under ## ALX Low Level Programming.

## Resource

- [secrets of printf](https://www.cypress.com/file/54761/download)
- [Implementing printf and scanf in C](https://iq.opengenus.org/how-printf-and-scanf-function-works-in-c-internally/)
- [All About Printf](https://akshatshibu.wordpress.com/2015/07/22/all-about-printf/)


## Description

- The function `_printf` writes output to stdout. The function writes under the control of a `format` string that specifies how subsequent arguments (accessed via the variable-length argument facilities of standard library `stdarg`) are converted for output.

- Prototype: `int _printf(const char *format, ...);`

## Return

- Upon success, `_printf` returns the number of characters printed (**excluding the terminating null byte used to end output to strings**). If an output error is encountered, the function returns `-1`.

## Format of the Argument String

- The `format` string argument is a constant character string composed of zero or more directives: ordinary characters (apart from `%`) which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.
- Conversion specification is introduced by the character `%` and ends with a conversion specifier (which in whole make up the format specifier.)


The _printf function is a custom implementation of the standard C library 
function printf. It allows you to format and output text to the console or 
other output streams.

This program implements a custom printf function that supports the following conversion specifiers:

    **%c** : prints a single character
    **%s** : prints a null-terminated string
    **%d**, %i, %u, %o, %x, %X : prints a signed/unsigned integer in decimal, octal, or hexadecimal format
    **%p** : prints a pointer address
    **%S** : prints a string with non-printable characters represented in the format \xXX (where XX is the ASCII code value in hexadecimal, always two characters in uppercase)

The program also supports the following flag characters:

    **0** : left-pads the output with zeros instead of spaces
    **#** : left-justifies the output within the given field width
    **+** : always prints the sign of a signed number (+ or -)
    **space** : prints a space before a positive number (overrides the + flag)

The program also supports the following length modifiers:

    **h** : short (for integers)
    **l** : long (for integers)

In addition, the program supports the following custom conversion specifiers:

    **%r** : prints the reversed string
    **%R** : prints the rot13'ed string

The maximum field width that can be specified is 1024 characters. This buffer size is used to minimize the number of calls to the write function.
    
## AUTHORS
    This project is a collaboration between:
    Godwin Ojukwu --> [My Github Profile](https://github.com/Emeriego)
    Christian Ochenehi Peter --> [My GitHub Profile](https://github.com/chrixsaint)
    

