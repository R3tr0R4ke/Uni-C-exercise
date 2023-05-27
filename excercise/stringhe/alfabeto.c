#include <stdio.h>

void main()
{
    char ch;

    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        putchar(ch);
        printf(" ");
    }

    putchar('\n');
}