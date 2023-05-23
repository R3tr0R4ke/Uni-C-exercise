#include <stdio.h>
int main(void)
{
    int nomeVariabile = 10;                                                              // dichiara la variabile int
    // int *p;                                                                           // dichiara un puntatore ad una variabile di tipo int
    // p = &nomeVariabile;                                                               // ora p punta alla variabile nomeVariabile
    int *p = &nomeVariabile;
    printf("contenuto della variabile nomeVariabile: %d \n", nomeVariabile);             // stampa il contenuto della variabile nomeVariabile
    printf("indirizzo della variabile nomeVariabile: %d \n", &nomeVariabile);            // stampa l’indirizzo della variabile nomeVariabile
    printf("contenuto di p che è l'indirizzo della variabile nomeVariabile: %d \n", p);  // stampa il contenuto di p che è l’indirizzo della variabile nomeVariabile
    printf("contenuto della variabile puntata da p ovvero di nomeVariabile: %d \n", *p); // stampa il contenuto della variabile puntata da p ovvero di nomeVariabile
    printf("indirizzo del puntatore p: %d \n", &p);                                      // stampa l'indirizzo del puntatore p
}