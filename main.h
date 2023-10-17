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


#endif
