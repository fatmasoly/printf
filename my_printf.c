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
int cp = 0, len = 0;
char *str, c;
if (format == NULL)
return (-1);
va_start(ptr, format);
while (*format)
{
if (*format != '%')
{
write(1, format, 1);
cp++;
}
else
format++;
if (*format == '\0')
break;
if (*format == '%')
{
write(1, format, 1);
cp++;
}
else if (*format == 'c')
{
c = va_arg(ptr, int);
write(1, &c, 1);
cp++;
}
else if (*format == 's')
str = va_arg(ptr, char *);
while ((str[len]) != '\0')
{
len++;
write(1, str, len);
cp += len;
}
format++;
}
va_end(ptr);
return (cp);
}

