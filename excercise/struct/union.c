#include <stdio.h>

typedef union {
    int x;
    float y;
} MY_UNION;

//unione con struttura anonima
typedef union{
    int x;
    float y;
    struct {
        int a;
        int b;
    };
} MIA_UNIONE;

void main()
{
    MY_UNION v = {100.345};     //come se abbia fatto v.x = 100.345

    printf("%d\n", v.x);        //stampo 100

    v.y = 100.34;

    printf("%.2f\n", v.y);      //stampo 100.34

    MIA_UNIONE t;

    t.y = 100.34;
    t.a = 200;

    printf("%3.2f\n", t.y);
    printf("%d", t.a);
}