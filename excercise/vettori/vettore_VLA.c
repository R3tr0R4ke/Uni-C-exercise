#include <stdio.h>

void main()
{
	int dimensione = 0;
	printf("Inserisci la dimensione dle vettore:");
	scanf("%d", &dimensione);

	int mioVettore[dimensione];

	for (int i = 0; i < dimensione; i++)
	{
		printf("inserisci il valore che andra\' in posizione %d :", i);
		scanf("%d", &mioVettore[i]);
	}
	printf("\nHai inserito i seguenti valori: ");
	for (int i = 0; i < dimensione; i++)
	{
		printf("%d  ", mioVettore[i]);
	}
}
