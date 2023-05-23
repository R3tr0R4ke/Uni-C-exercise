#include <stdio.h>

void stampaParola(char* ptrAr);

void main()
{
    char array[10];
    char* ptrAr = &array[0];

    printf("Inserisci caratteri: ");
    for (size_t i = 0; i < 10; i++)
    {
        scanf("%c", &array[i]);
    }

    stampaParola(&array[0]);
}

//stampa una parola di dimensione 10 utilizzando i puntatori come parametri
void stampaParola(char* ptrAr)
{
    printf("Numero stampa con puntatori: ");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%c", *ptrAr);
        ptrAr++;
    }
}