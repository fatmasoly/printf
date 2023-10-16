#ifndef MY_PRINTF_H
#define MY_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flag_char - Structure to store flag characters for custom printf
 * @plus: Indicates if the '+' flag is found.
 * @hashtag: Indicates if the '#' flag is found.
 * @space: Indicates if the ' ' (space) flag is found.
 *
 * Description:
 * This structure is used to store the various format flags that can be used
 * in a custom printf function. It helps in parsing and processing format
 * strings during printing.
 */
typedef struct flag_char
{
int plus;
int hashtag;
int space;
} flag;
/**
 * struct handle_specifiers - Structure for custom printf format specifiers
 * @c: The format specifier character.
 * @f: A function pointer to the opposite handling function.
 *
 * Description:
 * This structure associates a format specifier character with a function
 * that handles the conversion and printing of data for that specifier.
 */
typedef struct handle_specifiers
{
char c;
int (*f)();
} spec_ha;
int _putchar(char c);
int _printf_char(va_list ptr);
int _printf_string(va_list ptr);
int _printf_percent(void);
int _strlen(char *str);
int _strlen(char *str);
int _printf(const char *format, ...);
int _printf_address(va_list ptr, flag *f);
int _printf_hexa(va_list ptr, flag *f);
int _printf_HEXA(va_list ptr, flag *f);
int _printf_bin(va_list ptr, flag *f);
int _printf_oct(va_list ptr, flag *f);
int _printf_rot13(va_list ptr, flag *f);
int _printf_reversed(va_list ptr, flag *f);
int _printf_custom_String(va_list ptr, flag *f);
int _printf_int(va_list ptr, flag *f);
int _printf_num(int num);
int _printf_unsigned(va_list ptr, flag *f);
int _number_of_digit(int n);
char *_conv(unsigned long int n, int b, int lowercase);
int (*get_printf(char str))(va_list, flag *);
int _get_flag(char c, flag *f);

#endif
