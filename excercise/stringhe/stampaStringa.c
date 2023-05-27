#include <stdio.h>
#include <string.h>

void main()
{
    const int MAX = 20;
    char nome[MAX];
    char ch;
    int n = 0;

    printf("Come ti chiami? ");
    ch = getchar();
    
    while(ch != '\n' && n < MAX)
    {
        nome[n] = ch;
        n++;
        ch = getchar();
    }

    printf("Benvenuto ");

    for(size_t i = 0; i < n; i++)
    {
        putchar(nome[i]);
    }
    printf("!\n");
}