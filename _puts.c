#include "main.h"
/**
 * _puts - Print a string to stdout.
 * @c: A pointer to the string to print.
 *
 * Return: The number of characters printed except null terminator.
 */
int _puts(char *c)
{
int i = 0;
if(c)
{
for (i = 0 ; c[i] != '\0' ; i++)
{
_putchar(c[i]);
}
}
return (i);
}

