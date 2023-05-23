#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "cercaMinimo.h"
#include "cercaMinimo.c"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
#ifndef COORDINATE
	#include "myTypes.h"
#endif
*/

int main(void)
{

	// COORDINATE coordinate;
	int rMin, cMin; // le coordinate del minimo

	int matrice[10][10];
	int i, j;

	srand(time(NULL));

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			matrice[i][j] = rand() % 100 + 1;
			printf("\t%d", matrice[i][j]);
		}
		printf("\n");
	}

	cercaMinimo(matrice, &rMin, &cMin);

	printf("Coordinate : %d - %d", rMin, cMin);

	return 0;
}