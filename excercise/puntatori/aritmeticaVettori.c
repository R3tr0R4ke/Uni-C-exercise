#include <stdio.h>

void main()
{
    int a = 10;
    //dereferenziazione
    int *ptrA = &a;     //il puntatore come valore l'indirizzo di memoria di a

    printf("[Dereferenzazione]\nValore di a: %d\nIndirizzo di a: %p\nValore di ptrA:%d\nIndirizzo di ptrA: %p\n", a, &a, *ptrA, ptrA);

    int *ptrB;
    //assegnamento
    ptrB = ptrA;
    printf("\n[Assegnamento]\nIndirizzo di ptrB: %p\nValore di ptrB: %d\n", ptrB, *ptrB);

    //Confronto
    if (*ptrA == *ptrB)
    {
        printf("\n[Confronto]\nPuntatori ptrA e ptrB uguali\n");
    }
    else if (ptrA < ptrB)
    {
        printf("\n[Confronto]\nPuntatori ptrA e ptrB diversi\n");
    }

    //incremento e decremento
    int vett[5] = {9, 5, 6, 7, 10};
    int *ptrVet = &vett[0];         //assegno l'indirizzo della prima cella del vettore al puntatore

    printf("\n[Incremento|Decremento]\nValore di ptrVet: %d\t| Indirizzo di ptrVet: %p\n", *ptrVet, ptrVet);
    ptrVet++;       //incremento l'indirizzo della cella di memoria, passo alla prossima cella
    printf("Valore di ptrVet: %d\t| Indirizzo di ptrVet: %p\n", *ptrVet, ptrVet);
    ptrVet--;       //decremento l'indirizzo della cella di memoria, ritorno alla cella di prima
    printf("Valore di ptrVet %d\t| Indirizzo di ptrVet: %p\n", *ptrVet, ptrVet);
    ptrVet += 3;    //incremento l'indirizzo di memoria di 3 posizioni, passo alla quarta cella
    printf("Valore di ptrVet: %d\t| Indirizzo di ptrVet: %p\n", *ptrVet, ptrVet);
    ptrVet -= 3;    //decremento l'indirizzo di memoria di 3 posizioni, ritorno alla prima cella
    printf("Valore di ptrVet: %d\t| Indirizzo di ptrVet: %p\n", *ptrVet, ptrVet);

    //differenza tra puntatori      //RESTITUSICE IL NUMERO DI POSIZIONI TRA I DUE PUNTATORI
    //PUOI FARLA SEI I PUNTATORI PUNTATONO AGLI STESSI ELEMENTI DELL'ARRAY, ALTRIMENTI STACCE
    int arr[10];    //array di dimensione 10 
    int *ptrArr = &arr[0];   //punto ptrArr alla prima cella di memoria dell'array arr[10]
    int *ptrQ, diff;

    ptrQ = ptrArr;      //assegno al puntatore ptrQ il valore di ptrArr e quindi il valore di arr[0]
    ptrArr += 6;        //incremento di 6 posizioni, mi troverò alla sesta cella cioè punto a arr[6]
    diff = ptrArr - ptrQ;   //vado a fare la differenza tra ptrArr e ptrQ cioè, le posizioni arr[6] - arr[0]
    printf("\n[Differenza tra puntatori]\nNumero di posizioni tra i due puntatori: %d", diff);

    //La somma tra puntori ricorda che non puoi farla, PINGONE!!!
}