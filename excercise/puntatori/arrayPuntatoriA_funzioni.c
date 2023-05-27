#include <stdio.h>

#define STUDENTS 3
#define EXAMS 4

// prototipi di funzione
void minimum(unsigned int grades[][EXAMS], size_t pupils, size_t tests);
void maximum(unsigned int grades[][EXAMS], size_t pupils, size_t tests);
void average(unsigned int grades[][EXAMS], size_t pupils, size_t tests);
void printArray(unsigned int grades[][EXAMS], size_t pupils, size_t tests);
void printMenu(void);

int main()
{
    // puntatore a funzione
    void (*processGrades[4])(unsigned int[][EXAMS], size_t, size_t) = {printArray, minimum, maximum, average};

    // array voti studenti
    unsigned int studentGrades[STUDENTS][EXAMS] = {
        {77, 68, 86, 73}, {96, 87, 89, 78}, {70, 90, 86, 81}};

    // ripeti finchè l'utente non sceglie l'opzione 4
    unsigned int choice = 0; // scelta di menu

    while (choice != 4)
    {
        // stampa il menu e leggi la scelta dell'utente
        do
        {
            printMenu();
            scanf("%u", &choice);
        } while (choice < 0 || choice > 4);

        // passa scelta nell'array
        if (choice != 4)
        {
            (*processGrades[choice])(studentGrades, STUDENTS, EXAMS);
        }
        else
        {
            puts("\nProgram Ended");
        }
    }
}

void minimum(unsigned int grades[][EXAMS], size_t pupils, size_t tests)
{
    unsigned int lowGrade = 100; // punteggio più alto possibile

    for (size_t i = 0; i <= pupils - 1; i++)
    {
        for (size_t j = 0; j <= tests - 1; j++)
        {
            if (grades[i][j] < lowGrade)
            {
                lowGrade = grades[i][j];
            }
        }
    }
    printf("\nThe lowest grade is %u\n", lowGrade);
}

// cerca il valore massimo
void maximum(unsigned int grades[][EXAMS], size_t pupils, size_t tests)
{
    unsigned int highGrade = 0; // punteggio più basso possibile

    for (size_t i = 0; i <= pupils - 1; i++)
    {
        for (size_t j = 0; j <= tests - 1; j++)
        {
            if (grades[i][j] > highGrade)
            {
                highGrade = grades[i][j];
            }
        }
    }
    printf("\nThe highest grade is %u\n", highGrade);
}

// calcola la media
void average(unsigned int grades[][EXAMS], size_t pupils, size_t tests)
{
    unsigned int total; // somma di tutti i voti

    puts("");

    for (size_t i = 0; i <= pupils - 1; i++)
    {
        total = 0;
        for (size_t j = 0; j <= tests - 1; j++)
        {
            total += grades[i][j];
        }
        printf("The average for student %d is %.1f\n", i + 1, (double)total / tests);
    }
}

// stampa i contenuti dell'array
void printArray(unsigned int grades[][EXAMS], size_t pupils, size_t tests)
{
    printf("%s", "\n [0] [1] [2] [3]");

    for (size_t i = 0; i <= pupils - 1; i++)
    {
        printf("\nstudentGrades[%u] ", i);
        for (size_t j = 0; j <= tests - 1; j++)
        {
            printf("%-7u", grades[i][j]);
        }
    }
    puts("");
}

// stampa il menu
void printMenu(void)
{
    printf("%s", "\nEnter a choice:\n"
                 " 0 Print the array of grades\n"
                 " 1 Find the minimum grade\n"
                 " 2 Find the maximum grade\n"
                 " 3 Print the average on all tests for each student\n"
                 " 4 End program\n"
                 "? ");
}