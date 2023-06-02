#include <stdio.h>
#include <string.h>

struct Libro{
    char titolo[50];
    char autore[50];
    int anno;
};

void libriDopoAnno(struct Libro libri[], int numLibri, int anno);

void main()
{
    int numLibri = 3;
    int annoSpecificato = 2005;

    struct Libro libri[3];

    strcpy(libri[0].titolo, "Libro 1");
    strcpy(libri[0].autore, "Autore 1");
    libri[0].anno = 2000;

    strcpy(libri[1].titolo, "Libro 2");
    strcpy(libri[1].autore, "Autore 2");
    libri[1].anno = 2010;

    strcpy(libri[2].titolo, "Libro 3");
    strcpy(libri[2].autore, "Autore 3");
    libri[2].anno = 2020;

    libriDopoAnno(libri, numLibri, annoSpecificato);
}

void libriDopoAnno(struct Libro libri[], int numLibri, int anno)
{
    printf("Libri pubblicati dopo il %d:\n", anno);

    for (int i = 0; i < numLibri; i++)
    {
        if (libri[i].anno > anno)
        {
            printf("-%s\n", libri[i].titolo);
        }
    }
}