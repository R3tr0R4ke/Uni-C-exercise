#include <stdio.h>
#include <string.h>

void main()
{
    const int MAX = 20;
    char strA[MAX];
    char strB[MAX];
    int lungA;
    int i;

    printf("Inserisci stringa A: ");
    gets(strA);

    printf("Inserisci stirnga B: ");
    gets(strB);

    lungA = strlen(strA);

    for(i = 0; strB[i] != 0; i++)
    {
        strA[lungA + i] = strB[i];  //copia stringa
    }

    strA[lungA + i] = 0; //aggiungo terminatore
    puts(strA);

    printf("Inserisci stringa A: ");
    gets(strA);

    printf("Inserisci stirnga B: ");
    gets(strB);

    //in modo analogo posso utilizzare la funzione strcat(dest, src);
    strcat(strA, strB);
    puts(strA);

    char strC[] = "Lollo";

    strcat(strA, strC);
    puts(strA);

    strcat(strB, "!");
    puts(strB);
}