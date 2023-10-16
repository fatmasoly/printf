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
spec_ha a[] = {
{'c', _printf_char},
{'s', _printf_string},
{'%', _printf_percent},
{'p', _printf_address},
{'x', _printf_hexa},
{'X', _printf_HEXA},
{'b', _printf_bin},
{'o', _printf_oct},
{'R', _printf_rot13},
{'r', _printf_reversed},
{'S', _printf_custom_String},
{'i', _printf_int},
{'d', _printf_int},
{'u', _printf_unsigned}
};
va_list ptr;
int spec;
int j = 0;
int length = 0;
va_start(ptr, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
while (format[j] != '\0')
{
spec = sizeof(a) / sizeof(a[0]) - 1;
while (spec >= 0)
{
if (a[spec].c == format[j])
{
length += a[spec].f(ptr);
j++;
break;
}
spec--;
}
if (spec < 0)
{
_putchar(format[j]);
length++;
j++;
}
}
va_end(ptr);
return (length);
}

