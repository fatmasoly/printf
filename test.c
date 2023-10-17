#include "main.h"
#include <stdio.h>

int main(void)
{
    int chars_printed;

    chars_printed = _printf("Let's print a simple sentence.\n");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("%c", 's');
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("%s", "This sentence is retrieved from va_args!\n");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Complete the sentence: You %s nothing, Jon snow.\n", "Know");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Complete the sentence: You %s nothing, Jon snow.\n", (char *)0);
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("%c%cths%s a%cg%s: Y%sou %s no%ching%s snow.%c, 'w', 'i', \"some\", \"more\", 'r', \"s\", \"\", \"Know\", 't', \", Jon\",\n");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("%%");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', "99", "Please wait", '\n');
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("css%ccs%scscscs", 'T', "Test");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("man gcc:\n%s", "str");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("NULL");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("%c", '\0');
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("%");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("%!\n");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("%K\n");
    printf("Number of characters printed: %d\n", chars_printed);

    return (0);
}

