#include "main.h"
/**
 * print_char - Print a character.
 * @ptr: A va_list containing the character to print.
 *
 * Return: The number of characters printed (always 1).
 */
static int print_char(va_list ptr)
{
return (_putchar(va_arg(ptr, int)));
}

/**
 * print_string - Print a string.
 * @ptr: A va_list containing the string to print.
 *
 * Return: The number of characters printed (the string length).
 */
static int print_string(va_list ptr)
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
int j = 0, res = 0;
va_start(ptr, format);
if (!format)
return (-1);
while (format[j] != '\0')
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
if (format[j] == 'c')
{
res += print_char(ptr);
}
else if (format[j] == 's')
{
res += print_string(ptr);
}
else if (format[j] == '%')
{
_putchar('%');
res++;
}
else
{
_putchar('%');
_putchar(format[j]);
res += 2;
}
}
j++;
}
va_end(ptr);
return (res);
}

