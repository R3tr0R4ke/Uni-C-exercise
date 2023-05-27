#include <stdio.h>

void main()
{
    int i;
    char c;

    c = 'A';
    printf("%c\n", c);

    c = 65;             //equivale ad 'A'
    printf("%c\n", c);

    i = c;              //i = 65
    printf("%d\n", i);

    c = c + 1;          //c = 66 cioè 'B'
    printf("%c\n", c);

    //c = c * 2;        //operazione non sensata per i char
    //printf("%c\n", c);
}