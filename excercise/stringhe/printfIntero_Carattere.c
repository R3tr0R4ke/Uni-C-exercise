#include <stdio.h>

int main (void)
{
    //printf con carattere
    printf("%c", 40);

    for (size_t i = 1; i <= 10; i++)
    {
        printf("%c",32);
    }
    printf("%c", 41);

    puts("");

    //printf con intero
    printf("%d", 40);

    for (size_t i = 1; i <= 10; i++)
    {
        printf("%d ",32);
    }
    printf("%d", 41);

    return 0;
}