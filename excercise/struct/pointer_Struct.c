#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//creo una struttura chiamata Person
struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
    //Allocazione della memoria usando malloc per le strutture Person
    struct Person *who = malloc(sizeof(struct Person));

    //assert determina se una condizione sia valida durante l'esecuzione del programma, in caso contrario interrompe l'esecuzione del programma
    assert(who != NULL);    //come parametro ha una espressione booleana, se è falsa (0) genera errore e interrompe l'esecuzione, se vero (1) continua l'esecuzione

    who -> name = strdup(name);     //strdup = crea una copia della stringa e la alloca dinamicamente in una nuova area di memoria, restituisce un puntatore di tipo char*
    who -> age = age;
    who -> height = height;
    who -> weight = weight;

    return who;
};

void Person_destroy(struct Person * who)
{
    assert(who != NULL);

    free (who -> name);     //free = dealloco dalla memoria in modo da evitare perdita di memoria dopo aver usato malloc
    free (who);
}

void Person_print (struct Person *who)
{
    printf("Name: %s\n", who -> name);
    printf("\tAge: %d\n", who -> age);
    printf("\tHeight: %d\n", who -> height);
    printf("\tWeight: %d\n\n", who -> weight);
}

void main()
{
    //Dicharo due strutture Person
    struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
    struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

    //Stampo la loro posizione in memoria i loro dati:
    printf("Joe is at memory location: %p\n", joe);
    Person_print(joe);

    printf("Frank is at memory location: %p\n", frank);
    Person_print(frank);

    //Modifico le variabili:
    joe -> age += 20;
    joe -> height -= 2;
    joe -> weight += 40;
    Person_print(joe);

    frank -> age += 20;
    frank -> weight += 20;
    Person_print(frank);

    //Libero la memoria distruggendo le strutture create:
    Person_destroy(joe);
    Person_destroy(frank);
}