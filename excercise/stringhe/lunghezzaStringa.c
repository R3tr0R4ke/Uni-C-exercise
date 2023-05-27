#include <stdio.h>
#include <string.h>

void main()
{
    const int MAX = 20;
    char s[MAX+1];  //lunghezza stringa + 1 che sarebbe il terminatore
    int lun;
    int i;
    
    //chiedo stringa in input
    printf("Inserisci stringa: ");
    gets(s);

    //trovo la lunghezza e la assegno ad i
    for(i = 0; s[i] != 0; i++)
    {
        ;
    }
    //assegno la lunghezza trovata alla variabile lun
    lun = i;
    printf("Stringa lunga: %d\n", lun);

    lun = strlen(s);    //analogo a quello fatto su per trovare la lunghezza della stringa
                        //bisogna dichiarare la libreria #include <string.h>
    printf("Stringa lunga: %d", lun);
}