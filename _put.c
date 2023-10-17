#include "main.h"
#include <unistd.h>
/**
 * _puts - Print a string to stdout.
 * @c: A pointer to the string to print.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _puts(char *c)
{
int i = 0;
if (c)
{
while (c[i] != '\0')
{
_putchar(c[i]);
i++;
}
}
return (i);
}

