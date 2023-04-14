#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num1, num2;
    int sommaProd = 0;
    bool isZero = false;

    do
    {
        printf("Inserisci un valore numerico: ");
        scanf("%d", &num1);

        printf("Inserisci un altro valore numerico:");
        scanf("%d", &num2);

        if (num1 == 0 || num2 == 0)
        {
            isZero = true;
            printf("\nNon ti chiedo più valori in input...");
        }

        int prodotto = num1 * num2;
        printf("\nIl prodotto di %d e %d è di: %d", num1, num2, prodotto);
        puts("\n");
        sommaProd += prodotto;
    }
    while (!isZero);

    printf("La somma di tutti i prodotti calcolati è di: %d", sommaProd);

    return 0;
}