#include <stdio.h>
#include <stdlib.h>

void main()
{
    char *p_ch;             //dichiaro il puntatore
    char ch1 = 'A', ch2;    //dichiaro le variabili
    
    printf("L\'indirizzo di p_ch è: %p\n", &p_ch);

    p_ch = &ch1;    //assegno l'indirizzo di ch1 al puntatore

    printf("Il valore contenuto in p_ch è %p\n", p_ch);

    printf("Il valore contenuto all'indirizzo puntato da p_ch è: %c\n", *p_ch);

    ch2 = *p_ch;
    printf("Il valore di ch2 è: %c", ch2);
}