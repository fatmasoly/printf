#include "main.h"
/**
 * printf_char - Print a character.
 * @ptr: A va_list containing the character to print.
 *
 * Return: The number of characters printed (always 1).
 */
int printf_char(va_list ptr)
{
return (_putchar(va_arg(ptr, int)));
}
/**
 * printf_string - Print a string.
 * @ptr: A va_list containing the string to print.
 *
 * Return: The number of characters printed (the string length).
 */
int printf_string(va_list ptr)
{
char *str;
int len = 0;
char *null_str;
str = va_arg(ptr, char *);
if (str)
{
while (str[len])
{
_putchar(str[len]);
len++;
}
}
else
{
null_str = "(null)";
while (null_str[len])
{
_putchar(null_str[len]);
len++;
}
}
return (len);
}
/**
 * printf_switch - Handle format specifier and print corresponding value.
 * @ptr: A va_list containing the arguments to print.
 * @format: The format specifier to determine the print behavior.
 *
 * This function processes the given format specifier and calls
 * the appropriate function to print the corresponding value. It supports
 * format specifiers for character, string, integer, unsigned integer, and
 * the percent sign.
 *
 * @ptr: A va_list containing the arguments to print.
 * @format: The format specifier to process.
 *
 * Return: The number of characters successfully printed.
 */
int printf_switch(va_list ptr, char format)
{
int res = 0;
switch (format)
{
case 'c':
res += printf_char(ptr);
break;
case 's':
res += printf_string(ptr);
break;
case 'd':
case 'i':
res += printf_int(ptr);
break;
case 'u':
res += printf_unsigned(va_arg(ptr, unsigned int), 10);
break;
case 'b':
res += printf_bin(va_arg(ptr, unsigned int));
break;
case 'S':
res += printf_STRING(ptr);
break;
case 'x':
res += printf_hexa(va_arg(ptr, unsigned int), 0);
break;
case 'X':
res += printf_hexa(va_arg(ptr, unsigned int), 1);
break;
case 'o':
res += printf_oct(va_arg(ptr, unsigned int));
break;
case 'p':
res += printf_p(ptr);
break;
case '%':
_putchar('%');
res++;
break;
default:
_putchar('%');
_putchar(format);
res += 2;
break;
}
return (res);
}
/**
 * _printf - Custom printf function that processes format specifiers.
 * @format: A format string that specifies the desired output format.
 * @...: A variable number of arguments corresponding to the format specifiers.
 *
 * Description:
 * This function emulates the behavior of the standard 'printf' function.
 * It processes a format string and its associated format specifiers,
 * performing the requested conversions, and printing the result.
 * It supports various format specifiers
 *
 * Return: The number of characters successfully printed, or -1 on error.
 */
int _printf(const char *format, ...)
{
va_list ptr;
int res = 0, j = 0;
va_start(ptr, format);
if (!format)
return (-1);
for (j = 0 ; format[j] != '\0' ; j++)
{
if (format[j] != '%')
{
_putchar(format[j]);
res++;
}
else
{
j++;
if (format[j] == '\0')
break;
res += printf_switch(ptr, format[j]);
}
}
va_end(ptr);
return (res);
}
