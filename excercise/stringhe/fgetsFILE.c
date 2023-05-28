#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define N 60

void main()
{
    FILE *fp;
    char nome[FILENAME_MAX], r[N];
    int nr = 0, nc = 0;

    printf("Nome del file: ");
    gets(nome);

    if((fp = fopen(nome, "rt")) == NULL)
    {
        printf("Errore nell'apertura del file");
        exit(1);
    }

    while (fgets(r, N, fp) != NULL)
    {
        nr++;
        nc += strlen(r) - 1;
    }

    fclose(fp);
    printf("Totale righe: %d\nTotale caratteri: %d\n", nr, nc);
}