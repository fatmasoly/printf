#include "main.h"
#include <unistd.h>
/**
 * printf_STRING - Print a string with special handling
 * @ptr: A va_list containing the string to print.
 *
 * This function processes the string and prints it with special handling
 * for non-printable characters. Non-printable characters are printed
 * as "\x" followed by the ASCII code value in hexadecimal
 * (always 2 characters). Printable characters are printed as-is.
 *
 * @ptr: A va_list containing the string to be printed.
 *
 * Return: The number of characters successfully printed.
 */
int printf_STRING(va_list ptr)
{
int count = 0, i = 0;
char *str;
char x[3];
int ascii;
str = va_arg(ptr, char *);
if (str == NULL)
{
str = "(null)";
}
for (i = 0 ; str[i] != '\0' ; i++)
{
if (str[i] < 32 || str[i] >= 127)
{
_putchar('\\');
_putchar('x');
ascii = (unsigned char)str[i];
x[0] = (ascii / 16) + (ascii / 16 > 9 ? 'A' - 10 : '0');
x[1] = (ascii % 16) + (ascii % 16 > 9 ? 'A' - 10 : '0');
x[2] = '\0';
_putchar(x[0]);
_putchar(x[1]);
count += 4;
}
else
{
_putchar(str[i]);
count++;
}
}
return (count);
}
