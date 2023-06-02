#include <stdio.h>

#define MAX_CORSI 30
#define MAX_STUD 10

typedef struct {
    char nomeStudente[10];
    char cognomeStudente[10];
    int eta;
}Studente;

typedef struct{
    char lingua[10];
    int livello;
    int numeroIscritti;
    char nomeInsegnante[15];
    Studente alunno[MAX_STUD];
}Corso;

Corso ScuolaLingue[MAX_CORSI];