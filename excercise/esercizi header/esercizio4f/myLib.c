#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int getN()
{
	float N;
	printf("Dammi un numero N: ");
	scanf("%f",&N);
	return N;
}

float calcolaRadiceQuadrata(float numero)
{
	return(sqrt(numero));
}

bool verificaNumero(float numero)
{
   bool numeroOK;
  if (numero>=0)
     numeroOK=true;
  else
     numeroOK=false; 

  return numeroOK;
}
