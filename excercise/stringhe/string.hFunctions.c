#include <stdio.h>
#include <string.h>

#define SIZE1 25
#define SIZE2 15

void main()
{
    //----------------------------Copia stringhe----------------------------
    //strcpy - strncpy  //copia una stringa in un altra
    char x[] = "Happy Birthday to You";
    char y[SIZE1];
    char z[SIZE2];

    //copia contenuto di x in y
    printf("%s%s\n%s%s\n",
            "The string in array x is: ", x,
            "The string in array y is: ", strcpy(y, x));

    //copia primi 14 cartteri di x in z
    strncpy(z, x, SIZE2 - 1);
    z[SIZE2 - 1] = '\0';        //assegno il terminatore alla stringa
    printf("The string in array z is: %s\n\n", z);

    //----------------------------Concatena stringhe----------------------------
    //strcat - strncat  //concatena due stringhe
    char str1[20] = "Happy ";
    char str2[] = "New Year ";
    char str3[40] = "";

    printf("str1 = %s\nstr2 = %s\n", str1, str2);

    //concatena s2 con s1
    printf("strcat(str1, str2) = %s\n", strcat(str1, str2));

    //concatena primi 6 caratteri di s1 con s3
    printf("strncat(str3, str1, 6) = %s\n", strncat(str3, str1, 6));

    //concatena s1 in s3
    printf("strcat(str3, str1) = %s\n\n", strcat(str3, str1));

    //----------------------------Confronto stringhe----------------------------
    //strcmp - strncmp       //confronta due stringhe
    const char *s1 = "Happy New Year";
    const char *s2 = "Happy New Year";
    const char *s3 = "Happy Holidays";

    printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
            "s1 = ", s1, "s2 = ", s2, "s3 = ", s3,
            "strcmp(s1, s2) = ", strcmp(s1, s2),
            "strcmp(s1, s3) = ", strcmp(s1, s3),
            "strcmp(s3, s1) = ", strcmp(s3, s1));

    printf("%s%2d\n%s%2d\n%s%2d\n",
            "strncmp(s1, s3, 6) = ", strncmp(s1, s3, 6),
            "strncmp(s1, s3, 7) = ", strncmp(s1, s3, 7),
            "strncmp(s3, s1, 7) = ", strncmp(s3, s1, 7));

    //----------------------------Ricerca char/stringa----------------------------
    //strchr        //ricerca carattere in una stringa
    const char *string = "This is a test";
    char character1 = 'a';
    char character2 = 'z';

    //se character1 viene trovato nella stirnga
    if (strchr(string, character1) != NULL)     //!= NULL si può rimuovere
    {
        printf("\n\"%c\" was found in \"%s\".", character1, string);
    }
    else    //altrimenti se character1 non viene trovato nella stringa
    {
        printf("\n\"%c\" was not found in \"%s\".\n", character1, string);
    }

    if (strchr(string, character2) != NULL)
    {
        printf("\n\"%c\" was found in \"%s\".", character2, string);
    }
    else    //altrimenti se character2 non viene trovato nella stringa
    {
        printf("\n\"%c\" was not found in \"%s\".\n\n", character2, string);
    }

    //strstr    //ricerca sotto-stringa nella stringa
    const char *string1 = "abcdefabcdef";
    const char *string2 = "def";

    printf("%s%s\n%s%s\n%s%s\n", "string1 = ", string1, "string2 = ", string2,
            "The remainder of string1 begginning with the first occurence of string2 is: ", strstr(string1, string2));

    //strspn - strcspn   //calcola lunghezza parte iniziale s composta solo dei caratteri presenti in r
    int len;
    const char strA[] = "ABCDEFG019874";
    const char strB[] = "ABCD";

    len = strspn(strA, strB);
    printf("\n%s%s\n%s%s\n%s%d\n\n", "strA = ", strA, "strB = ", strB, "Length is: ", len);

    const char *strA1 = "The values is 3.14159";
    const char *strB2 = "1234567890";

    printf("%s%s\n%s%s\n%s\n%s%u\n",
            "strA1 = ", strA1, "strB2 = ", strB2,
            "The length of the initial segment of strA1",
            "containing no character from strB2 = ", strcspn(strA1, strB2));

    //strpbrk       //restituisce prima occorrenza di un carattere prensente in s uguale a qualsia carattere presente in r
    const char *sa1 = "This is  test";
    const char *sa2 = "beware";

    printf("\n%s\"%s\"\n'%c'%s\n\"%s\"\n\n",
            "Of the chracters in ", sa2,
            *strpbrk(sa1, sa2), " appears earliest in ", sa1);

    //strtok        //spezza la stringa in stirnghe (token)
    char stringa[80] = "Questo è - un esempio - di token";
    const char stringa2[2] = "-";

    char *token;

    token = strtok(stringa, stringa2);

    while (token != NULL) 
    {
        printf(" %s\n", token);
        token = strtok(NULL, stringa2);
    }

    //----------------------------Conversioni numero-stringa----------------------------
    //atoi      //estrae il valore INTERO contenuto nella stringa (parte dai primi caratteri)
    int val;
    char stri[20];

    strcpy(stri, "98993489");
    val = atoi(stri);
    printf("\nString value = %s, Int value = %d\n", stri, val);

    strcpy(stri, "ma questa è una stringa");
    val = atoi(stri);
    printf("String value = %s, Int value = %d\n\n", stri, val);

    //atof      //estrae il valore REALE contenuto nella stringa (parte dai primi caratteri)
    float var;
    char stri2[20];

    strcpy(stri2, "98993489");
    val = atof(stri2);      //non funzione, idk why
    printf("String value = %s, Float value = %f\n", stri2, val);

    strcpy(stri2, "se stringa");
    val = atof(stri2);
    printf("String value = %s, Float value = %f\n\n", stri2, val);

    //itoa      //converte valore integer in una stringa utilizzando "radix" dato
    int a = 54325;
    char buffer[20];

    itoa(a, buffer, 2); //2 = binario, 10 = deciamle, 16 = esadecimale
    printf("Valore binario = %s\n", buffer);

    itoa(a, buffer, 10);
    printf("Valore decimale = %s\n", buffer);

    itoa(a, buffer, 16);
    printf("Valore esadecimale = %s\n\n", buffer);

    //strtod        //converte una stirnga in un floating point
    const char *strin = "51.2% are admitted";
    char *ptrStrin;

    double d = strtod(strin, &ptrStrin);

    printf("The string \"%s\" is converted to the\n", strin);
    printf("double value %.2f and the string \"%s\"\n", d, ptrStrin);
}