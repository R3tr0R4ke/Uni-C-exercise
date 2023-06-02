#include <stdio.h>
#include <string.h>

typedef struct{
    char targa[7];
    char marca[15];
    char modello[20];
    int cilindrata;
    float potenza;
}Motoveicolo;

typedef struct{
    char nome[30];
    char cognome[40];
    char codiceFiscale[16];
}Proprietario;

typedef struct {
    Motoveicolo* motoveicolo;
    Proprietario* proprietario;
}VocePRA;

typedef struct{
    VocePRA elementi[10000];
    int n_elementi;
}PRA;
