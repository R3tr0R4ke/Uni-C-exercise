#include <stdio.h>
#include <string.h>

#define MAX_S 100
#define MAX_R 100

void main()
{
    char s[MAX_S] = "non no non non piove non";
    char r[MAX_R] = "non";
    int ls = strlen(s);
    int lr = strlen(r);
    int trovato = 0, diversi, pos, i, isLowChar, isUpChar;

    for (pos = 0; pos <= (ls - lr); pos++)
    {
        isLowChar = (s[pos - 1] >= 'a' && s[pos - 1] <= 'z');   //1 se posizione precedente è lettera minuscola
        isUpChar = (s[pos - 1] >= 'A' && s[pos - 1] <= 'Z');    //1 se posizione precedente è lettera maiuscola
    
        if (pos == 0 || (isLowChar != 1 && isUpChar != 1))
        {
            diversi = 0;

            for (i = 0; i <= (lr - 1); i++)
            {
                if (s[pos + 1] != r[i])
                {
                    diversi = 1;
                }

                if (diversi == 0)
                {
                    trovato = 1;
                }
            }
        }
    }
}