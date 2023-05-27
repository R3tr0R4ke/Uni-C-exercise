#include <math.h>
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    int mcd = MCD(num1, num2);

    printf("L'MCD del numero %d e di %d è: %d\n", num1, num2, mcd);
    return 0;
}

int MCD (int num1, int num2)
{
    int resto;

    do
    {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    } while (num2 > 0);
    
    return num1;
}