#include <stdio.h>
#include <string.h>

struct student{
    int rollno;
    char name[10];
};

int main()
{
    //dichiaro un array di strutture, in questo caso creo 5 strutture
    struct student st[5];

    printf("Inserisci informazioni di 5 studenti: ");
    for (int i = 0; i < 5; i++)
    {
        printf("\nInserisci Rollno: ");
        scanf("%d", &st[i].rollno);

        printf("Inserisci nome: ");
        scanf("%s", &st[i].name);
    }
    
    printf("\nLista informazioni studenti: ");
    for (int i = 0; i < 5; i++)
    {
        printf("\nRollno: %d\tNome: %s", st[i].rollno, st[i].name);
    }
}