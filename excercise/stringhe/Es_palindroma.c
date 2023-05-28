#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 30

//Prototipi di funzione

void getParola (char * str);
void stringToLower (char str[]);
void palindroma (char str[]);

void main()
{
    char parola[MAX_SIZE];

    getParola(parola);
    
    stringToLower(parola);
    
    palindroma(parola);
    
}

//Chiede una stringa in input da tastiera e restituisce la sua stampa
void getParola (char str[])
{
    printf("Inserisci stringa: ");
    gets(str);

    printf("Hai inserito la stringa \"%s\"\n", str);
}

//Trasforma un stringa composto da maiuscole e minuscole in una stringa di sole minuscole
void stringToLower (char str[])
{
    //trasformo la stringa in una stringa di soli caratteri minuscoli
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }

    printf("La stringa minuscola è: %s\n", str);
}

//Controlla se la stringa data è palindroma
void palindroma (char str[])
{
    int isPalindrome = 1;
    int lungParola = strlen(str);
    
    for (int i = 0; i < lungParola; i++)
    {
        //confronto la stringa al contrario
        if (str[i] != str[lungParola - i - 1])  
        {
            isPalindrome = 0;
        }
    }

    if (isPalindrome)
    {
        printf("La stringa \"%s\" è palindroma\n", str);
    }
}