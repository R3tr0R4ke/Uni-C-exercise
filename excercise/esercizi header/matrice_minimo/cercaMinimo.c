#include <stdio.h>

void cercaMinimo(int mat[10][10], int *rigaMinimo, int *colonnaMinimo)
{
    int minimo = 100;
    int rMin, cMin, i, j;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (mat[i][j] < minimo)
            {
                minimo = mat[i][j];
                rMin = i;
                cMin = j;
            }
        }
    }

    printf("Il minimo e\' in coordinate [%d][%d] e vale: %d\n", rMin, cMin, minimo);
    *rigaMinimo = rMin;
    *colonnaMinimo = cMin;
}