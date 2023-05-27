#include <stdio.h>

void minuscolaToMaiuscola(char c);
void maiuscolaToMinuscola (char c);

void main()
{
    char ch;

    minuscolaToMaiuscola(ch);
    maiuscolaToMinuscola(ch);
}

void minuscolaToMaiuscola (char c)
{
    printf("Inserisci lettera minuscola: ");
    c = getchar(); // esempio: 't' = 116

    if (c >= 'a' && c <= 'z')
    {
        printf("%c lettera minuscola\n", c);

        c = c + ('A' - 'a');               // 116 + (65 - 97) =
        printf("La maiuscola è: %c\n", c); // 116 - 82 = 84 = 'T'
    }
    else
    {
        printf("Carattere non valido...\n");
    }

    fflush(stdin);
}

void maiuscolaToMinuscola (char c)
{
    printf("Inserisci lettera maiuscola: ");
    c = getchar();

    if (c >= 'A' && c <= 'Z')
    {
        printf("%c lettera maiuscola\n", c);

        c = c - ('A' - 'a');
        printf("La minuscola è: %c\n", c);
    }
    else
    {
        printf("Carattere non valido...");
    }
}