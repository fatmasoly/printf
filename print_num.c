#include "main.h"
#include <unistd.h>
/**
 * printf_int - Print an integer.
 * @ptr: A va_list containing the integer to print.
 *
 * This function prints an integer by converting it to a string
 * and calling another function to print the string.
 *
 * Return: The number of characters printed.
 */
int printf_int(va_list ptr)
{
int num;
int count = 0;
num = va_arg(ptr, int);
if (num < 0)
{
_putchar('-');
count++;
num = -num;
}
if (num == 0)
{
_putchar('0');
count++;
}
else
{
count += printf_recurs(num, 10);
}
return (count);
}
