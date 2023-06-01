#include <stdio.h>
#include <string.h>

//Ci sono due modi per dichiarare le struct in modo innestato

//1) Il primo metodo è usare struct separate:
struct address{
    char city[20];
    int pin;
    char phone[14];
};

struct employee
{
    char name[20];
    struct address ind;     //innesto la struct "address" in questo modo
};

//2) Il secondo metodo è usare struct innestate:
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

void main()
{
    struct employee emp;

    //Possiamo accedere agli elementi delle strutture innestate nei seguenti modi
    printf("Enter Employee information: ");
    scanf("%s %s %d %s", emp.name, emp.ind.city, &emp.ind.pin, emp.ind.phone);
    printf("\nEmployee info:\nName: %s\nCity: %s\nPinCode: %d\nPhone: %s\n", emp.name, emp.ind.city, emp.ind.pin, emp.ind.phone);

    //Avendo dato il nome alla riga 30 creaiamo già una struttura, quindi avrò ora due strutture di tipo impiegato, cioè "impie1" e "impie2" ho anche creato però "data1";
    struct impiegato impie2 = {23, "Ciro", {25, 04, 2005}}; 

    //Assegno direttamente dei valori senza inserili dall'input da tastiera:
    impie1.id = 22;
    strcpy(impie1.nome, "Gilberto");    //ricorda per le stringhe di usare strcpy();
    impie1.data1.dd = 13;
    impie1.data1.mm = 05;
    impie1.data1.yyyy = 2009;

    //informazioni impiegato1:
    printf("\nInfo impiegato:\nId: %2d\nNome: %s\n", impie1.id, impie1.nome);
    printf("Data iscrizione: %d/%d/%d\n", impie1.data1.dd, impie1.data1.mm, impie1.data1.yyyy);

    //impie2 = impie1;    //copio impie1 in impie2

    //informazioni impiegato2:
    printf("\nInfo impiegato:\nId: %2d\nNome: %s\n", impie2.id, impie2.nome);
    printf("Data iscrizione: %d/%d/%d\n", impie2.data1.dd, impie2.data1.mm, impie2.data1.yyyy);
}