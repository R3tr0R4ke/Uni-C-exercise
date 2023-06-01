#include <stdio.h>
#include <string.h>

//creo una struttura chiamata myStructure
struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
};

//Permette di stampare le variabili di una struttura
void stampaStrut (struct myStructure struc);

void main()
{
    //creo una variabile struttura di myStructure chiamata s1 e s2
    struct myStructure s1;
    struct myStructure s2;
    //Posso anche dichiarare e inizializzare direttamente
    struct myStructure s3 = {55, 'F', "Questa è una stringa"};
    

    //Assegno valori ai membri di s1
    s1.myNum = 13;
    s1.myLetter = 'B';
    //s1.myString = "Prova";    //Non posso assegnare valori ad una array di stringa in questo modo se dichiarato nello struct;
    //La soluzione è usare strcpy():
    strcpy(s1.myString, "Testo di prova");

    //Assegno valori ai membri di s1
    s2.myNum = 22;
    s2.myLetter = 'A';

    printf("My number s1: %d\n", s1.myNum);
    printf("My letter s1: %c\n", s1.myLetter);
    printf("My string s1: %s\n\n", s1.myString);
    
    printf("My number s2: %d\n", s2.myNum);
    printf("My letter s2: %c\n\n", s2.myLetter);

    printf("My number s3: %d\n", s3.myNum);
    printf("My letter s3: %c\n", s3.myLetter);
    printf("My string s3: %s\n\n", s3.myString);

    //Posso anche copiare le strutture con altre:
    s2 = s3;

    printf("Copia di s3 in s2:\nMy number s2: %d\n", s2.myNum);
    printf("My letter s2: %c\n", s2.myLetter);
    printf("My string s2: %s\n\n", s2.myString);

    //Modifico le variabili di s1:
    s1.myNum = 43;
    s1.myLetter = 'P';
    strcpy(s1.myString, "Stringa inserita");

    //chiamata di una funzione passando in input una struttura:
    stampaStrut(s1);
}

void stampaStrut (struct myStructure struc)
{
    printf("My number s1: %d\n", struc.myNum);
    printf("My letter s1: %c\n", struc.myLetter);
    printf("My string s1: %s\n\n", struc.myString);
}