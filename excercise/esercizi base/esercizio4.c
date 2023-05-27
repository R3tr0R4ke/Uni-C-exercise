#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int num1, num2;
    float rapporto;
    bool isError = false;

    do
    {
        printf("\nInserisci il primo valore: ");
        scanf("%d", &num1);

        printf("Inserisci il secondo valore: ");
        scanf("%d", &num2);

        if ((num1 > 0 && num2 > 0) || (num1 < 0 && num2 < 0) || (num1 == 0 && num2 < 0) || (num1 < 0 && num2 == 0))
        {
            if (num1 > num2)
            {
                rapporto = (float)num1 / num2;
            }
            else
            {
                rapporto = (float)num2 / num1;
            }
            float radiceRapp = sqrt(rapporto);
            printf("La radice quadrata del rapporto dei due numeri è: %.2f\n", radiceRapp);
        }
        else if (num1 == 0 || num2 == 0)
        {
            printf("\nIl denominatore o numeratore è uguale a 0. Impossibile effettuare il calcolo");
            isError = true;
        }

    } while (!isError);

    return 0;
}