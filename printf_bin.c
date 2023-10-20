#include "main.h"
#include <unistd.h>
/**
 * printf_bin - Print an unsigned integer in binary format.
 * @num: The unsigned integer to print in binary.
 *
 * This function converts an unsigned integer to its binary representation
 * and prints it. It handles leading zeros and non-zero integers.
 *
 * @num: The unsigned integer to be converted and printed in binary.
 *
 * Return: The number of characters successfully printed.
 */
int printf_bin(unsigned int num)
{
int count = 0, i = 0;
int bin[32];
if (num == 0)
{
_putchar('0');
count++;
}
else
{
while (num > 0)
{
bin[i] = num % 2;
num /= 2;
i++;
}
for (i = i - 1 ; i >= 0 ; i--)
{
_putchar('0' + bin[i]);
count++;
}
}
return (count);
}

