#include <stdio.h>
#include <string.h>

void main()
{
    //memcpy    //copia n specifico di byte dal secondo argomento al suo primo argomento
    char s1[17];
    char s2[] = "Copy this string";

    memcpy(s1, s2, 17);
    printf("%s\n%s\"%s\"\n\n", "After s2 is copied into s1 with memcpy,", "s1 contains ", s1);

    //memmove   //come memcpy ma si passa da un terzo array di caratteri
    char x[] = "Sweet Home Alabama";
    char y[19];

    memcpy(y, x, 19);

    printf("%s%s\n", "The string in array x before memmove is: ", x);
    printf("%s%s\n", "The string in array y before memmove is: ", y);
    printf("%s%s\n", "The string in array x after memmove is: ", (char *) memmove(x, &x[6], 10));
    printf("%s%s\n", "The string in array y after memmove is: ", (char *) memmove(y, &y[6], 16));

    //memcmp    //confronta i byte del primo argomento con quelli del secondo
    char sA[] = "ABCDEFG";
    char sB[] = "ABCDXYZ";

    printf("\n%s%s\n%s%s\n%s%2d\n%s%2d\n%s%2d\n\n",
            "sA = ", sA, "sB = ", sB,
            "memcmp(sA, sB, 4) = ", memcmp(sA, sB, 4),
            "memcmp(sA, sB, 7) = ", memcmp(sA, sB, 7),
            "memcmp(sB, sA, 7) = ", memcmp(sB, sA, 7));

    //memchr    //trova prima occorrenza di un byte nel num specificato di byte n
    const char *s = "Questa sia la stringa";
    //inizializza puntatore con 21 caratteri
    printf("Questa è la stringa s: %s\n", s);
    printf("La parte rimanente di s dopo il carattere \"%c\" è \"%s\"", 's', (char *) memchr(s, 's', 21));

    //memset    //copia il valore del byte del secondo argomento nei primi n byte del primo argomento
    char string1[15] = "BBBBBBBBBBBBBB";

    printf("String1 = %s\n", string1);
    printf("String1 after memset = %s\n", (char *) memset(string1, 'b', 7));
}