#include <stdbool.h>

//Controlla che il valore inserito non si un terminale (valore < 0)
bool checkEnd(float valore);

//Ritorna il valore di un valore
float getValue(char nomeVariabile);

//Controlla se si rispetta l'rodine A<B<C
bool checkOrder(float A, float B, float C);

//Restituisce il valore massimo della terna inserita
float getMax(float A, float B, float C);

//Restituisce il valore minimo della terna inserita
float getMin(float A, float B, float C);

//Stampa il valore massimo e il valore minimo
void stampaMaxMin(float massimo, float minimo);