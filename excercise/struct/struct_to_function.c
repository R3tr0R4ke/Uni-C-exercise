#include <stdio.h>
#include <string.h>

struct impiegato
{
    int id;
    char nome[20];

    struct data
    {
        int dd;
        int mm;
        int yyyy;
    }data1;
} impie1;       //Posso dichiarare il nome della prima struttura da utlizzare direttamente qui volendo

//Metodo che permette di stampare le info degli impiegati
void stampaInfo(struct impiegato imp);
void printInfo(int id, char nome[], int d, int m, int y);

void main()
{
    //Avendo dato il nome alla riga 30 creaiamo già una struttura, quindi avrò ora due strutture di tipo impiegato, cioè "impie1" e "impie2" ho anche creato però "data1";
    struct impiegato impie2; 

    impie1.id = 22;
    strcpy(impie1.nome, "Gilberto");    //ricorda per le stringhe di usare strcpy();
    impie1.data1.dd = 13;
    impie1.data1.mm = 05;
    impie1.data1.yyyy = 2009;

    //informazioni impiegato1:
    printf("Info impiegato:\nId: %2d\nNome: %s\n", impie1.id, impie1.nome);
    printf("Data iscrizione: %d/%d/%d\n", impie1.data1.dd, impie1.data1.mm, impie1.data1.yyyy);

    impie2 = impie1;    //copio impie1 in impie2

    //informazioni impiegato2:  UTILIZZO UNA METODO "stampaInfo()" CREATO PER STAMPARE LE INFO DELL'IMPIEGATO
    stampaInfo(impie2);

    printInfo(impie2.id, impie2.nome, impie2.data1.dd, impie2.data1.mm, impie2.data1.yyyy);
}

//POSSO PASSARE LA STRUCT DIRETTAMENTE SENZA DOVER SCRIVERE TUTTI I PARAMETRI 
void stampaInfo(struct impiegato imp)       
{
    printf("\nInfo impiegato:\nId: %2d\nNome: %s\n", imp.id, imp.nome);
    printf("Data iscrizione: %d/%d/%d\n", imp.data1.dd, imp.data1.mm, imp.data1.yyyy);
}

//OPPURE CIASCUNA VARIABILE DELLA STRUCT COME PARAMETRO DELLA FUNZIONE
void printInfo(int id, char nome[], int d, int m, int y)
{
    printf("\nInfo impiegato:\nId: %2d\nNome: %s\n", id, nome);
    printf("Data iscrizione: %d/%d/%d\n", d, m, y);
}