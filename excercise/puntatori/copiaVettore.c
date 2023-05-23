#include <stdio.h>

void copiaVettore(int* ptrV1, int* ptrV2);

void main()
{
    int vet1 [5] = {6, 9, 3, 5, 7};
    int vet2 [5];

    int *ptrVet1 = &vet1[0];
    int *ptrVet2 = &vet2[0];

    printf("Primo vettore: ");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", *(ptrVet1 + i));
    }

    copiaVettore(vet1, vet2);
}

//copio il primo vettore nel secondo vettore
void copiaVettore(int* ptrV1, int* ptrV2)
{
    printf("\nSecondo vettore: ");
    for (size_t i = 0; i < 5; i++)
    {
        *ptrV2 = *(ptrV1 + i);
        printf("%d ", *ptrV2);
    }
}