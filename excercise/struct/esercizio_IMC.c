#include <stdio.h>

#define MAX_PERSONE 10

typedef struct{
    double peso;
    double altezza;
    int eta;
    double imc;
} PERSONA;

void main()
{
    PERSONA persone[MAX_PERSONE];

    for (int i = 0; i < MAX_PERSONE; i++)
    {
        printf("\nInserisci peso: ");
        scanf("%f", &persone[i].peso);

        printf("Inserisci altezza: ");
        scanf("%f", &persone[i].altezza);

        printf("Inserisci eta: ");
        scanf("%d", &persone[i].eta);

        persone[i].imc = persone[i].peso / (persone[i].altezza * persone[i].altezza);
    }

    printf("\nPersone di 20 o meno anni:");
    for (int i = 0; i < MAX_PERSONE; i++)
    {
        if (persone[i].eta <= 20)
        {
            printf("\nPeso: %f\nAltezza: %f\nEtà: %d", persone[i].peso, persone[i].altezza, persone[i].eta);         
        }
        
    }

    printf("\n\nImc delle persone:");
    for (int i = 0; i < MAX_PERSONE; i++)
    {
        if (persone[i].imc < 25)
        {
            printf("\nPeso: %f\nAltezza: %f\nEtà: %d\nIMC: sottopeso", persone[i].peso, persone[i].altezza, persone[i].eta);
        }
        else if (persone[i].imc > 30)
        {
            printf("\nPeso: %f\nAltezza: %f\nEtà: %d\nIMC: sovvrapeso", persone[i].peso, persone[i].altezza, persone[i].eta);
        }
        else
        {
            printf("\nPeso: %f\nAltezza: %f\nEtà: %d\nIMC: normopeso", persone[i].peso, persone[i].altezza, persone[i].eta);
        }
    }
}