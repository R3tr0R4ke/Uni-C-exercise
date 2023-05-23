#include <stdio.h>

int sommaNumeri(int* ptrNum1, int* ptrNum2);

void main ()
{
    int num1 = 5, num2 = 10;

    printf("La somma dei due numeri è: %d", sommaNumeri(&num1, &num2));
}

int sommaNumeri(int* ptrNum1, int* ptrNum2)
{
    int somma = 0;
    somma = *ptrNum1 + *ptrNum2;
    return somma;
}