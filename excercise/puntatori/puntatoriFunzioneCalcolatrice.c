#include <stdio.h>

// Funzioni per le operazioni
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main()
{
    int a, b;
    char operator;

    // Dichiarazione del puntatore a funzione per le operazioni
    int (*operation)(int, int);

    printf("Inserisci il numero a: ");
    scanf("%d", &a);
    fflush(stdin); // svuota stdin
    printf("Inserisci il numero b: ");
    scanf("%d", &b);

    printf("Inserisci l'operazione (+, -, *, /): ");
    scanf(" %c", &operator);

    // Selezione dell'operazione in base all'input dell'utente
    switch (operator)
    {
    case '+':
        operation = add;
        break;
    case '-':
        operation = subtract;
        break;
    case '*':
        operation = multiply;
        break;
    case '/':
        operation = divide;
        break;
    default:
        printf("Operazione non valida!\n");
        return 0;
    }

    // Chiamata della funzione tramite il puntatore a funzione
    int result = operation(a, b);

    printf("Risultato: %d\n", result);

    return 0;
}

// Funzioni per le operazioni
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Errore: divisione per zero!\n");
        return 0;
    }
}