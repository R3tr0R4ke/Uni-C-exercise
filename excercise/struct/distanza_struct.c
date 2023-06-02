//Definire un struct "Punto" che rappresenti un punto nel piano cartesiano con le coordinate x e y.
//Scrivi una funzione che prenda due punti come argomenti e calcoli la distanza euclidea tra i due punti.
//Stampa il risultato nel main
#include <stdio.h>
#include <math.h>

typedef struct Punto{
    int x;
    int y;
}Punto;

float distanzaEuclidea(struct Punto a, struct Punto b);

void main()
{
    Punto p1;
    Punto p2;

    printf("Inserisci le coordinate del primo punto: ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Inserisci le coordinate del secondo punto: ");
    scanf("%d %d", &p2.x, &p2.y);

    printf("La distanza euclidea tra i due punti è di: %f", distanzaEuclidea(p1, p2));
}

float distanzaEuclidea(struct Punto a, struct Punto b)
{
    float distEuclid = (float) sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    return distEuclid;
}