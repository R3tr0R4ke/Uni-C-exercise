#include <stdio.h>

void swapNumeri(int* a, int* b);

void main ()
{
    int num1 = 5;
    int num2 = 25;

    printf("Numeri prima dello swap\nNum1: %2d\tNum2: %2d\n", num1, num2);

    swapNumeri(&num1, &num2);

    printf("\nNumeri dopo lo swap\nNum1: %2d\tNum2: %2d\n", num1, num2);
}

void swapNumeri(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}