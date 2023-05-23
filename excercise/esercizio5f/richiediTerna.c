#include <stdio.h>
#include <stdbool.h>

bool checkEnd(float valore)
{
    bool end;

    if (valore < 0)
    {
        end = true;
    }
    else
    {
        end = false;
    }
    return end;
}

float getValue(char nomeVariabile)
{
    float valore;
    printf("\nInserisci il valore di %c : ", nomeVariabile);
    scanf("%f", &valore);
    return valore;
}

bool checkOrder(float A, float B, float C)
{
    bool areOrdered;
    if ((A <= B) && (B <= C))
    {
        areOrdered = true;
    }
    else
    {
        areOrdered = false;
    }
    return areOrdered;
}

float getMax(float A, float B, float C)
{
    float max_value = A;
    if (B > max_value)
    {
        max_value = B;
    }
    if (C > max_value)
    {
        max_value = C;
    }
    return max_value;
}

float getMin(float A, float B, float C)
{
    float min_value = A;
    if (B < min_value)
    {
        min_value = B;
    }
    if (C < min_value)
    {
        min_value = C;
    }
    return min_value;
}

void stampaMaxMin(float massimo, float minimo)
{
    printf("\nIl massimo della terna è: %2.2f", massimo);
    printf("\nIl minimo della terna è: %2.2f", minimo);
}