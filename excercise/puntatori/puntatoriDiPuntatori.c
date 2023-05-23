#include <stdio.h>

void main()
{
    int a = 5;

    int* ptr;   //dichiaro puntatore
    ptr = &a;   //punto ptr alla variabile a

    int** ptr2; //dichiaro un punatatore che punta ad un puntatore
    ptr2 = &ptr;    //punto ptr2 a ptr

    printf("L'indirizzo di a è: %d\nL'indirizzo di ptr è: %d\nL'indirizzo di ptr2 è: %d\n", &a, &ptr, &ptr2);
    printf("\nIl contenuto di a è: %d\nIl contenuto di ptr è: %d\nIl contenuto di ptr2 è: %d", a, *ptr, **ptr2);
}