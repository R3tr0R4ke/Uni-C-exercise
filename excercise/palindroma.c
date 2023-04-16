#include <stdio.h>
#include <string.h>


int main ()
{
    char word [10];
    printf("Inserisci la prima parola: ");
    gets(word);
    
    int i = 0;
    int y = strlen(word) - 1;

    if(word[i++] != word[y--])
    {
        printf("%s non è palindroma", word);
    }
    else
    {
        printf("%s è palindroma", word);
    }

    return 0;
}