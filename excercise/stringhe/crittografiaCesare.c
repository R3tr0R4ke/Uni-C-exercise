#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char frase[200];
    int shift;
    char continua;
    char tipoCritto[15];

    do
    {
        printf("Inserisci frase: ");
        gets(frase);

        printf("Inserisci numero di shift: ");
        scanf("%d", &shift);

        printf("Inserisci tipo di crittografia (codifica, decodifica): ");
        scanf("%s", tipoCritto);

        while((getchar() != '\n'));

        if (strcmp(tipoCritto, "codifica") == 0)
        {
            for (int i = 0; i <= strlen(frase) - 1; i++)
            {
                frase[i] = frase[i] + shift;
            }
            printf("Codifica avvenuta: %s\n", frase);
        }
        else if (strcmp(tipoCritto, "decodifica") == 0)
        {
            for (int i = 0; i <= strlen(frase) - 1; i++)
            {
                frase[i] = frase[i] - shift;
            }
            printf("Decodifica avvenuta: %s\n", frase);
        }

        printf("Vuoi inserire un'altra frase? (s / n): ");
        scanf("%c", &continua);

        while((getchar()!='\n'));
    }
    while (continua == 's');
}