#ifndef MY_PRINTF_H
#define MY_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _puts(char *c);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_int(va_list ptr);
int printf_num(int num, int b);
int printf_recurs(int num, int b);
int printf_unsigned(unsigned int num, int b);
int printf_unsigned_recurs(unsigned int num, int b);
int printf_bin(unsigned int num);
int printf_STRING(va_list ptr);


#endif
