#include <stdio.h>
#include <ctype.h>

void main()
{
    char strMin[] = "stringa con lettere minuscole";
    char strMai[] = "STRINGA MAIUSCOLA";

    puts(strMin);

    for (size_t i = 0; strMin[i] != 0; i++)
    {
        strMin[i] = toupper(strMin[i]);
    }

    puts(strMin);

    puts(strMai);

    for (size_t i = 0; strMai[i] != 0; i++)
    {
        strMai[i] = tolower(strMai[i]);
    }

    puts(strMai);

    
}