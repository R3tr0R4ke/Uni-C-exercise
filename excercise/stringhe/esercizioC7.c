#include <stdio.h>

void main()
{
    printf("Inserisci primo numero: ");
    char num1 = getchar();

    fflush(stdin);

    printf("Inserisci secondo numero: ");
    char num2 = getchar();

    if ((num1 >= '0' && num1 <= '9') && (num2 >= '0' && num2 <= '9'))
    {
        int tmpNum1 = num1 - '0', tmpNum2 = num2 - '0';

        printf("Somma numeri: %d", tmpNum1 + tmpNum2);
    }
}