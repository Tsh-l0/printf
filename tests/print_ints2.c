#include "main.h"
#include <stdio.h>

int main(void)
{
    int len1, len2;

    len1 = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    len1 = _printf("Character: %c\n", 'H');
    len2 = printf("Character: %c\n", 'H');
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    len1 = _printf("String: %s\n", "I am a string");
    len2 = printf("String: %s\n", "I am a string");
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    len1 = _printf("Percent: %%\n");
    len2 = printf("Percent: %%\n");
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    len1 = _printf("Integer: %d\n", 123);
    len2 = printf("Integer: %d\n", 123);
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    len1 = _printf("Negative integer: %d\n", -456);
    len2 = printf("Negative integer: %d\n", -456);
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    len1 = _printf("Integer with i specifier: %i\n", 789);
    len2 = printf("Integer with i specifier: %i\n", 789);
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    return 0;
}

