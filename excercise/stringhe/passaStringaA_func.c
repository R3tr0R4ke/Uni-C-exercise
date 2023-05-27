#include <stdio.h>
#include <string.h>

void stampaStringa1(char * s);
void stampaStringa2(char s[]);

void main()
{
    char myString[] = "Buongiorno";

    stampaStringa1(myString);
    
    puts("");

    stampaStringa2(myString);
}

void stampaStringa1(char * s)
{
    for (size_t i = 0; *(s + i) != '\0'; i++)
    {
        printf("%c", *(s + i));
    }
}

void stampaStringa2(char s[])
{
    for (size_t i = 0; s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }
}