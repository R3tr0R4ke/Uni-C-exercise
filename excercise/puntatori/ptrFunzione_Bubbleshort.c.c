#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1
#define ASCEND compare_ascend
#define DESCEND compare_descend
#define LIST_SIZE 6

// prototipi di funzione
void bubble_sort(int[], int, int (*compare)(int, int));
int compare_ascend(int, int);
int compare_descend(int, int);

void main(void)
{
    int (*ptrfOrdinamento[2])(int, int); // dichiaro un array di 2 puntatori a funzione
    ptrfOrdinamento[0] = ASCEND;
    ptrfOrdinamento[1] = DESCEND;
    char scelta = 'a';
    while ((scelta == 'a') || (scelta == 'b'))
    {
        printf("Vettore ordinato:");
        static int list[] = {1, 0, 5, 444, -332, 76};
        bubble_sort(list, LIST_SIZE, scelta == 'a' ? ptrfOrdinamento[0] : ptrfOrdinamento[1]);
        for (int i = 0; i <= LIST_SIZE - 1; i++)
        {
            printf("%d - ", list[i]);
        }
        printf("\ncome lo vuoi ordinare? a=Ascendente,b=discendente: ");

        scanf("%c", &scelta);
        while (getchar() != '\n')
            ; // svuota stdin
    }
}

int compare_ascend(int a, int b)
// Confronta e restituisci 1 se a>b
{
    return a > b;
}

int compare_descend(int a, int b)
// Confronta e restituisci 1 se a<b
{
    return a < b;
}

void bubble_sort(int list[], int list_size, int (*ptrfCompare)(int, int))
{
    int j, temp, sorted = FALSE;
    while (!sorted)
    {
        sorted = TRUE; /* assume che list sia ordinato */
        for (j = 0; j < list_size - 1; j++)
        {
            if ((*ptrfCompare)(list[j], list[j + 1]))
            { /* almeno un elemento non � in ordine  */
                sorted = FALSE;
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        } /* fine del ciclo for */
    }     /* fine del ciclo while */
}