#include "main.h"
#include <unistd.h>
/**
 * printf_p - Print a pointer address in hexadecimal format.
 * @ptr: A va_list containing the pointer to print.
 *
 * This function takes a pointer from a va_list, converts it to an
 * unsigned integer, and prints its hexadecimal address with the
 * "0x" prefix.
 *
 * Return: The number of characters printed.
 */
int printf_p(va_list ptr)
{
unsigned long int val;
int count = 0, i;
char x[16] = "0123456789abcdef";
char x_dig[16];
void *addr = va_arg(ptr, void *);
if (addr == NULL)
{
_putchar('0');
_putchar('x');
_putchar('0');
return (3);
}
val = (unsigned long int)addr;
while (val != 0)
{
x_dig[count] = x[val % 16];
val /= 16;
count++;
}
_putchar('0');
_putchar('x');
for (i = count - 1 ; i >= 0 ; i--)
{
_putchar(x_dig[i]);
}
return (count + 2);
}
