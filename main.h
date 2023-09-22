
#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Structure
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int run_put(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);


int put_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int put_str(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int put_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int put_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int put_bin(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int put_unsign(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int put_oct(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int put_hex_dec(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int put_hx_up(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int put_hex(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

int put_non_putable(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int put_ptr(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int put_flags(const char *format, int *i);
int put_width(const char *format, int *i, va_list list);
int put_precision(const char *format, int *i, va_list list);
int put_size(const char *format, int *i);

int put_rev(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int put_r13(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int putchar_handler(char c, char buffer[],
	int flags, int width, int precision, int size);
int put_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int put_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int put_ptr_w(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int put_unsign_w(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

int putable(char);
int put_hex_code(char, char[], int);
int dig(char);

long int conv_num(long int num, int size);
long int conv_uns(unsigned long int num, int size);
void put_buff(char buffer[], int *b_ind);

#endif

