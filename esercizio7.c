#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int num1, num2;

    printf("\nInserisci il primo valore: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo valore: ");
    scanf("%d", &num2);

    if (num1 % num2 == 0)
    {
        printf("Il primo numero è multiplo del secondo");
    }
    else 
    {
        printf("Niente multiplicità");
    }
    return 0;
}