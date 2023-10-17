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
count += printf_num(num, 10);
return (count);
}
/**
 * printf_num - Print a number with the specified base.
 * @num: The number to print.
 * @b: The base for the number (e.g., 10 for decimal).
 *
 * This function prints a number with the specified base by
 * recursively dividing the number and converting the digits to characters.
 *
 * Return: The number of characters printed.
 */
int printf_num(int num, int b)
{
int count = 0;
if (num == 0)
{
_putchar('0');
count++;
}
else
{
count += printf_recurs(num, b);
}
return (count);
}
/**
 * printf_recurs - Recursively print a number.
 * @num: The number to print.
 * @b: The base for the number (e.g., 10 for decimal).
 *
 * This function is a recursive helper function for printf_num to
 * print a number with the specified base.
 *
 * Return: The number of characters printed.
 */
int printf_recurs(int num, int b)
{
int count = 0;
if (num != 0)
{
count += printf_recurs(num / b, b);
count += _putchar('0' + num % b);
}
return (count);
}

