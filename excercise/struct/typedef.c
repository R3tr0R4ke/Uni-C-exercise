#include <stdio.h>

//dichiarazione senza typedef:
struct Point {
    int x;
    int y;
};

//assegno con typedef la struttura point:
typedef struct Point Point;

//dichiarazione struttura con typedef (metodo consigliato):
typedef struct Punto{
    int x1;
    int y1;
} Punto;

void main()
{
    //dichiarazione senza aver usato typedef:
    struct Point p1;

    //dichiarazione dopo che ho usato typedef:
    Point p2;   //non ho più bisogno nelle dichiarazione di star a scrivere ogni volta struct 
    Punto p3;   

    p2.x = 14;
    p2.y = 3;

    p3.x1 = 25;
    p3.y1 = 34;

    p1 = p2;
    //diversamente non posso copiare questo:
    //p1 = p3;    //hanno struttura diversa (nome della struttura);

    printf("P2:\tx = %2d\ty = %2d\n\n", p2.x, p2.y);
    printf("P3:\tx = %2d\ty = %2d\n\n", p3.x1, p3.y1);
    printf("P1:\tx = %2d\ty = %2d\n", p1.x, p1.y);
}