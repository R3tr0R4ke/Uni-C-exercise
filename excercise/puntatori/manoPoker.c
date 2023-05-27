#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// prototipi
void shuffle(unsigned int deck[][FACES]);
void deal(unsigned int deck[][FACES], unsigned int hand[][2], char *suit[], char *face[]);
void pair(unsigned int hand[][2], char *suit[], char *face[]);
void threeOfKind(unsigned int hand[][2], char *suit[], char *face[]);
void fourOfKind(unsigned int hand[][2], char *suit[], char *face[]);
void straightHand(unsigned int hand[][2], char *suit[], char *face[]);
void flushHand(unsigned int hand[][2], char *suit[], char *face[]);

void main()
{
    char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    char *face[FACES] = {
        "Ace", "Deuce", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten",
        "Jack", "Queen", "King"};
    unsigned int deck[SUITS][FACES]; // rappresenta il mazzo di carte
    unsigned int hand[5][2];         // rappresenta una mano

    // effettua un ciclo sulle righe del mazzo
    for (size_t row = 0; row < SUITS; ++row)
    {
        // effettua un ciclo sulle colonne del mazzo per la riga corrente
        for (size_t column = 0; column < FACES; ++column)
        {
            deck[row][column] = 0; // inizializza un elemento dell'array del mazzo
            // a 0
        }
    }

    srand(time(NULL)); // seme per il generatore di numeri casuali

    // mischia il mazzo e distribuisce una mano di 5 carte
    shuffle(deck);
    deal(deck, hand, suit, face);

    // determina il valore del poker della mano
    pair(hand, suit, face);
    threeOfKind(hand, suit, face);
    fourOfKind(hand, suit, face);
    straightHand(hand, suit, face);
    flushHand(hand, suit, face);
}

// mischia il mazzo
void shuffle(unsigned int deck[][FACES])
{
    size_t row;    // rappresenta il valore seme della carta
    size_t column; // rappresenta il valore figura della carta
    // per ciascuna delle 52 carte, scegli un elemento del mazzo a caso
    for (unsigned int card = 1; card <= CARDS; ++card)
    {
        do // scegli una nuova posizione a caso finche' non viene trovato un elemento non occupato
        {
            row = rand() % SUITS;         // seleziona la riga a caso
            column = rand() % FACES;      // seleziona la colonna a caso
        } while (deck[row][column] != 0); // fine di do...while
        // inserisci il numero di carta nell'elemento scelto del mazzo
        deck[row][column] = card;
    }
}

// distribuisci una mano di poker
void deal(unsigned int deck[][FACES], unsigned int hand[][2], char *suit[], char *face[])
{
    unsigned int r = 0; // contatore per la posizione nella mano
    puts("The hand is:\n");
    // ripeti per distribuire le carte
    for (size_t card = 1; card < 6; ++card)
    {
        for (size_t row = 0; row < SUITS; ++row)
        {
            for (size_t column = 0; column < FACES; ++column)
            {
                if (deck[row][column] == card)
                {
                    hand[r][0] = row;
                    hand[r][1] = column;
                    printf("%5s of %-8s\n", face[column], suit[row]);
                    ++r;
                }
            }
        }
    }
    puts("\n");
}

// determina se ci sono coppie nella mano
void pair(unsigned int hand[][2], char *suit[], char *face[])
{
    // contatore che registra quante carte di ciascun tipo ci sono nella mano
    unsigned int counter[FACES] = {0};

    // registra quante carte di ciascun tipo ci sono nella mano
    for (size_t r = 0; r < 5; ++r)
    {
        ++counter[hand[r][1]];
    }
    // stampa il risultato se c'e' una coppia
    for (size_t p = 0; p < FACES; ++p)
    {
        if (counter[p] == 2)
        {
            printf("The hand contains a pair of %ss.\n", face[p]);
        }
    }
}

// determina se ce ne sono tre di un tipo nella mano
void threeOfKind(unsigned int hand[][2], char *suit[], char *face[])
{
    // contatore che registra quante carte di ciascun tipo ci sono nella mano
    unsigned int counter[FACES] = {0};
    // registra quante carte di ciascun tipo ci sono nella mano
    for (size_t r = 0; r < 5; ++r)
    {
        ++counter[hand[r][1]];
    }
    // stampa il risultato se ce ne sono tre di un tipo
    for (size_t t = 0; t < FACES; ++t)
    {
        if (counter[t] == 3)
        {
            printf("The hand contains three %ss.\n", face[t]);
        }
    }
}

// determina se ce ne sono quattro di un tipo nella mano
void fourOfKind(unsigned int hand[][2], char *suit[], char *face[])
{
    // contatore che registra quante carte di ciascun tipo ci sono nella mano
    unsigned int counter[FACES] = {0};
    // registra quante carte di ciascun tipo ci sono nella mano
    for (size_t r = 0; r < 5; ++r)
    {
        ++counter[hand[r][1]];
    }
    // stampa il risultato se c'e' una coppia
    for (size_t k = 0; k < FACES; ++k)
    {
        if (counter[k] == 4)
        {
            printf("The hand contains four %ss.\n", face[k]);
        }
    }
}

// determina se c'e' una scala nella mano
void straightHand(unsigned int hand[][2], char *suit[], char *face[])
{
    unsigned int s[5] = {0}; // array che mantiene una copia della mano
    unsigned int temp;       // intero temporaneo
    // copia le posizioni delle colonne per effettuare l'ordinamento
    for (size_t r = 0; r < 5; ++r)
    {
        s[r] = hand[r][1];
    }
    // bubble sort per le posizioni delle colonne
    for (size_t pass = 1; pass < 5; ++pass)
    {
        for (size_t comp = 0; comp < 4; ++comp)
        {
            if (s[comp] > s[comp + 1])
            {
                temp = s[comp];
                s[comp] = s[comp + 1];
                s[comp + 1] = temp;
            }
        }
    }
    // controlla se le colonne ordinate sono una scala
    if (s[4] - 1 == s[3] && s[3] - 1 == s[2] && s[2] - 1 == s[1] && s[1] - 1 == s[0])
    {
        printf("The hand contains a straight from %s to %s.\n", face[s[0]], face[s[4]]);
    }
}

// determina se c'e' un colore nella mano
void flushHand(unsigned int hand[][2], char *suit[], char *face[])
{
    // contatore che registra quante carte di ciascun seme ci sono nella mano
    unsigned int count[SUITS] = {0};
    // registra quante carte di ciascun seme ci sono nella mano
    for (size_t r = 0; r < 5; ++r)
    {
        ++count[hand[r][0]];
    }
    for (size_t f = 0; f < SUITS; ++f)
    {
        if (count[f] == 5)
        {
            printf("The hand contains a flush of %ss.\n", suit[f]);
        }
    }
}