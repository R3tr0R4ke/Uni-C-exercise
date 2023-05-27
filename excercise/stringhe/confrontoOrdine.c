#include <stdio.h>
#include <string.h>

void main()
{
    char strA[] = {'a','l','t','i','c','c','i','o','\0'};
    char strB[] = {'a','l','t','i','c','c','i','o','l','o','\0'};
    int minore;
    int i;

    minore = 0;     //se = 1 significa che strA < strB

    for (i = 0; (strA[i] != 0 && strB[i] != 0) && minore == 0; i++)
    {
        if(strA[i] < strB[i])
        {
            minore = 1;
        }
        if(strA[i] > strB[i])
        {
            minore = -1;
        }
    }

    if (minore == 0 && strA[i] == 0 && strB[i] != 0)
    {
        minore = 1;
    }

    if (minore == 1)
    {
        printf("%s è minore di %s\n", strA, strB);
    }
    else if (minore == 0)
    {
        printf("%s e %s sono uguali\n", strA, strB);
    }
    else
    {
        printf("%s è maggiore di %s\n", strA, strB);
    }
    
    //in modo analogo posso utilizzare la funzione strcmp(dest, src);
    int ris = strcmp(strA, strB);

    if (ris < 0)
    {
        printf("%s minore di %s\n", strA, strB);
    }
    else if (ris == 0)
    {
        printf("%s uguale a %s\n", strA, strB);
    }
    else if (ris > 0)
    {
        printf("%s maggiore di %s\n", strA, strB);
    }
}