#include <stdio.h>

int main() 
{
    int a;
    printf("Inserisci il primo numero: ");
    scanf("%d", &a);

    int b;
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    int i, j;
    for (i = 0; i < a; i++) 
    {
        for (j = 0; j < b; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}