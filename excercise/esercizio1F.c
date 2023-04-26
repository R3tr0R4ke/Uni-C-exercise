#include <stdio.h>
#include <stdbool.h>

int main ()
{
    int contaPari = 0, contaDispari = 0, diffNulla = 0;

    bool termina = false;
    do
    {
        int a, b, c;

        printf("Inserisci il valore A: ");
        scanf("%d", &a);
        printf("Inserisci il valore B: ");
        scanf("%d", &b);

        if(differenza(a, b) % 2 == 0)
        {
            contaPari++;
            if(differenza(a, b) == 0)
            {
                diffNulla++;
            }
        }
        else
        {
            contaDispari++;
        }
        
        printf("Inserisci il valore C: ");
        scanf("%d", &c);

        if ((a + b) < c)
        {
            termina = true;
        }
    }
    while(termina != true);

    printf("\nI conteggi pari sono: %d\nI conteggi dispari sono: %d\nI conteggi nulli sono: %d", contaPari, contaDispari, diffNulla);

    return 0;
}

int differenza(int primoNum, int secondoNum)
{
    return primoNum - secondoNum;
}
