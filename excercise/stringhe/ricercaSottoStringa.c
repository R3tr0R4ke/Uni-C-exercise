#include <stdio.h>
#include <string.h>

#define MAX_S 100
#define MAX_R 100

void main()
{
    char s[MAX_S] = "Buongiorno oggi non piove e non nevica";
    char r[MAX_R] = "non";
    int ls = strlen(s);
    int lr = strlen(r);
    int trovato = 0;        //0 false, 1 true
    int diversi = 0;
    int i, j;

    for (i = 0; i <= (ls - lr); i++)
    {
        diversi = 0;

        for (j = 0; j <= lr - 1; j++)
        {
            if (s[i + j] != r[j])
            {
                diversi = 1;
            }

            if(diversi == 0)
            {
                trovato = 1;
            }
        }

        if (diversi == 0)
        {
            printf("Trovato in posizione %d\n", i);
        }
    }

    if (trovato == 0)
    {
        printf("La stringa \"%s\" non è stata trovata nella stringa \"%s\"\n", r, s);
    }

    //in modo analogo posso usare la funzione strstr(strPadre, sotto-stringa)
    if(strstr(s, r) != NULL)
    {
        printf("Sotto stringa %s trovata!\n", r);
    }
}