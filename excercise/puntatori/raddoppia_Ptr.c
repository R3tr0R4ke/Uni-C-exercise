#include <stdio.h>

void raddoppiaNum(int* ptrA);

void main()
{
    int a = 10;

    printf("Numero prima di essere raddoppiato: %d\n", a);

    raddoppiaNum(&a);       //come se facessi *ptrA = &a (credo)

    printf("\nNumero dopo il raddoppio: %d", a);
}

void raddoppiaNum(int* ptrA)
{
    *ptrA = *ptrA * 2;
}