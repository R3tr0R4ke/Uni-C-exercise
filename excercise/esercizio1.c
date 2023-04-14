#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num1, num2;
    float rapporto;

    printf("Inserisci il primo valore: ");
    scanf("%d", &num1);

    printf("\nInserisci il secondo valore: ");
    scanf("%d", &num2);

    while (num1 != 0 && num2 != 0)
    {
        if (num1 > num2)
        {
            rapporto = num1 / num2;
        }
        else 
        {
            rapporto = (float) num2 / num1;
        }
        printf("Il rapporto dei due numeri è: %f", rapporto);
        num1 = num1 - num1;
    }
}