#include "main.h"
/**
 * _printf_char - Print a character.
 * @ptr: A va_list containing the character to print.
 *
 * Return: The number of characters printed (always 1).
 */
int _printf_char(va_list ptr)
{
_putchar(va_arg(ptr, int));
return (1);
}

/**
 * _printf_string - Print a string.
 * @ptr: A va_list containing the string to print.
 *
 * Return: The number of characters printed (the string length).
 */
int _printf_string(va_list ptr)
{
int j;
int len;
char *str;
str = (va_arg(ptr, char *));
if (str == NULL)
{
str = "(null)";
len = _strlen(str);
for (j = 0 ; j < len ; j++)
_putchar(str[j]);
return (len);
}
else
{
len = _strlen(str);
for (j = 0 ; j < len ; j++)
_putchar(str[j]);
}
return (len);
}
/**
 * _printf_percent - Print a percent symbol.
 *
 * Return: Always returns void.
 */
int _printf_percent(void)
{
_putchar('%');
return (1);
}

