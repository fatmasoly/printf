#include "main.h"
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
unsigned int j = 0;
unsigned int res = 0;
unsigned int str = 0;

va_start(ptr, format);
if (!format || (format[0] == '%' && format[1] == '\0'))
{
return (-1);
}
va_start(ptr, format);
for (j = 0 ; format[j] != '\0' ; j++)
{
if (format[j] != '%')
{
_putchar(format[j]);
}
if (format[j + 1] == 'c')
{
_putchar(va_arg(ptr, int));
j++;
}
else if (format[j + 1] == 's')
{
str = _puts(va_arg(ptr, char*));
j++;
res += (str - 1);
}
else if (format[j + 1] == '%')
{
_putchar('%');
}
res += 1;
}
return (res);
}

