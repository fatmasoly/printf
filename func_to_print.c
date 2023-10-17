#include "main.h"
#include <unistd.h>
/**
 * printf_int - Print an integer.
 * @ptr: A va_list containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int printf_int(va_list ptr)
{
int num, temp, j;
int len = 0, is_neg = 0;
char buff[12];
num = va_arg(ptr, int);
if (num < 0)
{
_putchar('-');
num = -num;
is_neg = 1;
}
if (num == 0)
{
_putchar('0');
len++;
temp = num;
}
while (temp != 0)
{
temp /= 10;
len++;
j = len - 1;
}
while (j >= 0)
{
buff[j] = (num % 10) + '0';
num /= 10;
j--;
}
for (j = 0 ; j < len ; j++)
{
_putchar(buff[j]);
}
return (len + is_neg);
}

