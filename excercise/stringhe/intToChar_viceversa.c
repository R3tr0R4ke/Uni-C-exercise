#include <stdio.h>

void main()
{
    int i;
    char ch;

    printf("Immetti codice ASCCI (32-126): ");
    scanf("%d", &i);

    ch = i;
    printf("Il carattere %c ha codice %d\n", ch, i);

    fflush(stdin);

    printf("\nImmetti un carattere: ");
    ch = getchar();

    //while (getchar() != '\n')
    //;

    i = ch;
    printf("Il carattere %c ha codice %d\n", ch, i);
}