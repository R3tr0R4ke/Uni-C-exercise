#include <stdio.h>

void main(void)
{
    char ch = '6';
    int val;

    if (ch >= '0' && ch <= '9')
    {
        printf("%c cifra numerica\n", ch);

        val = ch - '0';

        printf("Il suo valore è: %d", val);
    }
}