#include <stdio.h>

typedef struct studente
{
    char nome[20];
    char cognome[20];
    int nTessera;
    int matricola;
} MY_STUDENTS;

void main()
{
    int nStudenti = 0;

    MY_STUDENTS stud1 = {"Luisa", "Loth", 3452, 36373};

    printf("Lo studente %s %s ha la tessera n. %d e numero matricola n. %d\n", stud1.nome, stud1.cognome, stud1.nTessera, stud1.matricola);

    char risposta;
    printf("Vuoi aggiungere altri studenti? (s / n): ");
    scanf("%c", &risposta);

    if (risposta == 's' || risposta == 'S')
    {
        printf("Quanti altri studenti vuoi aggiungere: ");
        scanf("%d", &nStudenti);

        MY_STUDENTS studenti[nStudenti];

        for (int i = 0; i < nStudenti; i++)
        {
            printf("\nInserisci nome: ");
            scanf("%19s", &studenti[i].nome);

            printf("Inserisci cognome: ");
            scanf("%19s", &studenti[i].cognome);

            printf("Inserisci n. tessera: ");
            scanf("%d", &studenti[i].nTessera);

            printf("Inserisci n. matricola: ");
            scanf("%d", &studenti[i].matricola);
        }

        for (int i = 0; i < nStudenti; i++)
        {
            printf("\nStudente: %19s %19s\n\tN. tessera: %d\n\tN. matricola: %d\n", 
            studenti[i].nome, studenti[i].cognome, studenti[i].nTessera, studenti[i].matricola);
        }
    }
    else
    {
        printf("Chiusura del programma!\n");
    }
    
}