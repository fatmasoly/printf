#include "main.h"
#include <unistd.h>
/**
 * printf_hexa - Print an unsigned integer in hexadecimal format.
 * @num: The unsigned integer to be printed in hexadecimal.
 * @upper: An integer indicating whether to use uppercase
 * (1) or lowercase (0) letters.
 *
 * This function converts and prints an unsigned integer in hexadecimal
 * It supports both lowercase and uppercase hexadecimal characters
 * based on the 'upper' parameter.
 *
 * @num: The unsigned integer to be printed in hexadecimal.
 * @upper: If 1,use uppercase hexadecimal characters;if 0,use lowercase.
 *
 * Return: The number of characters successfully printed.
 */
int printf_hexa(unsigned int num, int upper)
{
int i;
char hexa[] = "0123456789abcdef";
char x;
int count = 0;
if (upper)
{
for (i = 28 ; i >= 0 ; i -= 4)
{
x = hexa[(num >> i) & 0xf];
_putchar(x);
count++;
}
}
else
{
for (i = 28 ; i >= 0 ; i -= 4)
{
x = hexa[(num >> i) & 0xf];
if (x >= 'a' && x <= 'f')
{
x -= 32;
}
_putchar(x);
count++;
}
}
return (count);
}
/**
 * printf_oct - Print an unsigned integer in octal format.
 * @num: The unsigned integer to print in octal format.
 *
 * This function converts and prints an unsigned integer in octal format.
 * It ensures leading zeros are skipped the output is correctly formatted.
 *
 * Return: The number of characters printed.
 */
int printf_oct(unsigned int  num)
{
int count = 0, i;
char oct[12];
int skip;
if (num == 0)
{
_putchar('0');
count++;
}
else
{
for (i = 11 ; i >= 0 ; i--)
{
oct[i] = (num & 7) + '0';
num >>= 3;
}
skip = 1;
for (i = 0 ; i < 12 ; i++)
{
if (skip && oct[i] == '0')
{
continue;
}
skip = 0;
_putchar(oct[i]);
count++;
}
}
return (count);
}
