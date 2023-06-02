#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct Motocicletta
{
    char marca[15];
    int cilindrata;
    int annoImmatricola;

    struct Acquirente
    {
        char nome[20];
        char cognome[20];
    };
} Motocicletta;

void inserisciDati(struct Motocicletta motoSalone[], int motoVend);
void visualizzaMarche(struct Motocicletta salone[], int motoVend);
void visualizzaAcquirente(struct Motocicletta salone[], int motoVend);
void numMotImmatriAnno(struct Motocicletta salone[], int motoVend);

void main()
{
    Motocicletta motosalone[5];

    bool isExit = false;
    int motoVendute = 0;

    do
    {
        int scelta;
        printf("\nCosa vuoi fare?\n[1]: Inserici dati\n[2]: Visualizza marche\n[3]: Visualizza acquirenti\n[4]: Visualizza n. motociclette\n[5]: ESCI\nInserisci scelta: ");
        scanf("%d", &scelta);
        fflush(stdin);

        switch (scelta)
        {
            // Caso 1) Inserisci dati
            case 1:
                inserisciDati(motosalone, motoVendute);
                motoVendute++;
                break;
            // Caso 2) Visualizza numero moto di data marca
            case 2:
                visualizzaMarche(motosalone, motoVendute);
                break;
            // Caso 3) Visualizza acquirenti con un moto di cilindrata superiore a quella data
            case 3:
                visualizzaAcquirente(motosalone, motoVendute);
                break;
            // Caso 4) Visualizza numero moticiclette immatricolate in un determinato anno
            case 4:
                numMotImmatriAnno(motosalone, motoVendute);
                break;
            // Caso 5) Terminazione del programma
            case 5:
                printf("\nChiusura del programma...\n");
                isExit = true;
                break;
            //Caso di input errato nel menu
            default:
                printf("\nInserimento errato...\n");
                break;
        }
    } while (isExit != true);
}

// Metodo che permette di inserire i dati delle motociclette vendute
void inserisciDati(struct Motocicletta motoSalone[], int motoVend)
{
    // Informazioni motocicletta
    printf("\nInserisci Marca: ");
    gets(motoSalone[motoVend].marca);
    printf("Inserisci cilindrata: ");
    scanf("%4d", &motoSalone[motoVend].cilindrata);
    printf("Inserisci anno immatricolazione: ");
    scanf("%4d", &motoSalone[motoVend].annoImmatricola);
    fflush(stdin);

    // Informazioni acquirente
    printf("Inserisci nome acquirente: ");
    gets(motoSalone[motoVend].nome);
    printf("Inserisci cognome acquirente: ");
    gets(motoSalone[motoVend].cognome);
}

void visualizzaMarche(struct Motocicletta salone[], int motoVend)
{
    char marcaRicerca[15];
    int numMotoTrovate = 0;

    printf("\nInserire nome marca di motocilette da cercare: ");
    gets(marcaRicerca);

    for (int i = 0; i < motoVend; i++)
    {
        if (strcmp(salone[i].marca, marcaRicerca) == 0)
        {
            numMotoTrovate++;
        }
    }
    printf("\nIl numero di motocilette \"%s\" è: %d\n", marcaRicerca, numMotoTrovate);
}

void visualizzaAcquirente(struct Motocicletta salone[], int motoVend)
{
    int cilindrata;
    printf("\nInserisci cilindrata per cercare proprietari che hanno quelle moto: ");
    scanf("%4d", &cilindrata);
    fflush(stdin);

    printf("Proprietari che hanno una moto di cilindrata superiore a %d\n", cilindrata);
    for (int i = 0; i < motoVend; i++)
    {
        if(salone[i].cilindrata > cilindrata)
        {
            printf("-%s\n", salone[i].cognome);
        }
    }
}

void numMotImmatriAnno(struct Motocicletta salone[], int motoVend)
{
    int annoImmatrRca, motoTrovate = 0;;

    printf("\nInserisci anno di imattricolazione da cercare: ");
    scanf("%d", &annoImmatrRca);
    fflush(stdin);

    for (int i = 0; i < motoVend; i++)
    {
        if (salone[i].annoImmatricola == annoImmatrRca)
        {
            motoTrovate++;
        }
    }
    printf("Ci sono %d moto immatricolate durante l'anno %d\n", motoTrovate, annoImmatrRca);
}