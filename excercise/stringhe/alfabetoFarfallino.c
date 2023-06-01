#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 101
#define MAX_FARFA 200

int isVocale (int carat);

void main()
{
    char string[MAX_SIZE];
    char stringFarfa[MAX_FARFA];
    char carattere;
    unsigned int pos = 0;

    printf("Inserisci frase: ");
    gets(string);

    printf("Hai inserito la frase \"%s\"\n", string);

    for (int i = 0; i <= strlen(string) - 1; i++)
    {
        if (isalpha(string[i]) != 0)    //se è una lettera
        {
            carattere = tolower(string[i]);

            if (isVocale(carattere) == 1)
            {
                stringFarfa[pos] = carattere;

                if (isupper(string[i]))
                {
                    stringFarfa[pos + 1] = 'F';
                }
                else
                {
                    stringFarfa[pos + 1] = 'f';
                }
                stringFarfa[pos + 2] = carattere;
                pos += 2;
            }   
        }
    }

    printf("Frase farfallina: %s\n", stringFarfa);
}

int isVocale (int carat)
{
    if (carat == 'a' || carat == 'e' || carat == 'i' || carat == 'o' || carat == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}