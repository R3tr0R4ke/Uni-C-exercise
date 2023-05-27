/*
Esercizio 4f
Progettare un algoritmo che risolve il seguente problema. 
Si desidera calcolare la somma delle radici quadrate di N valori numerici inseriti dall�utente. 
Il valore di N deve essere richiesto all�utente. L�algoritmo deve stampare la somma calcolata. 
L�algoritmo deve terminare con un messaggio di errore quando viene inserito un numero che non 
permette di effettuare il calcolo (nel dominio dei numeri reali).
*/

#include <stdio.h>
#include "myLib.h"
#include "myLib.c"
#include <stdbool.h>

void main (void)
{   float n;
    bool numeroOK;
    float sommaRadici=0;
	do
	{
	  n=getN();
	  numeroOK=verificaNumero(n);
	  if (numeroOK==1)
	  {
	  	sommaRadici+=calcolaRadiceQuadrata(n);
	  }
	  
	}
	while (numeroOK==1);
	
	printf("\nERRORE: hai inserito il numero %f che � fuori dal dominio della funzione radice quadrata (x>=0)",n);
	printf("\nLa somma delle radici cumulata fino ad ora e\': %2.2f",sommaRadici);
}
