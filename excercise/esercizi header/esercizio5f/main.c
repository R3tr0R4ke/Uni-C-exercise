#include <stdio.h>
#include <stdbool.h>

#include "richiediTerna.h"
#include "richiediTerna.c"

void main()
{
    float A, B, C, max, min;
    bool isEnd;

    do
    {
        A = getValue('A');
        isEnd = checkEnd(A);

        if(isEnd == false)
        {
            B = getValue('B');
            isEnd = checkEnd(B);

            if(isEnd == false)
            {
                C = getValue('C');
                isEnd = checkEnd(C);
                
                if(isEnd == false)
                {
                    if(checkOrder(A, B, C) == true)
                    {
                        printf("Terna accettata");
                        max = getMax(A, B, C);
                        min = getMin(A, B, C);
                        stampaMaxMin(max, min);
                    }
                }
            }
        }
    }
    while(isEnd == false);
}