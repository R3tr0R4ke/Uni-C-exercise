#include <stdio.h>
#include <string.h>     //libreria utile alla manipolazione delle stringhe

void main()
{
    char myString[100];  //alloca in memoria un vettore di caratteri
    char altraStringa[] = "Mamt";

    //dichiarazione con inizializzazione, tutte aggiungono \0 alla fine
    char *p = "Stringa";
    char p2[] = "Stringa";
    char p3[7] = "Stringa";
    //char p4[] = {"C", "I", "A", "O"};     //Non worka, non so perchè (tanto non lo uso)
    //char p5[] = {"C", "I", "A", "O"};     //Non worka, non so perchè (tanto non lo uso manco questo)
    //char p6[] NO perchè manca la dimensione e se fosse indicata sarebbe un array di caratteri

    //equivale a fare myString = "Buongiorno questa è una stringa" (NON SI PUO FARE!!!)
    strcpy(myString, "Buongiorno questa è una stringa");    

    //equivale a fare myString = altaStringa (NON SI PUO FARE!!!)
    strcpy(myString, altraStringa);
}