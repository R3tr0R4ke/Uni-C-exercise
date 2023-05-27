#include <stdio.h>
#include <stdlib.h>

#define DOWN 0  // sposta giù
#define RIGHT 1 // sposta destra
#define UP 2    // sposta su
#define LEFT 3  // sposta sinistra

// coordinate iniziali
#define X_START 2
#define Y_START 0

// prototipi
void mazeTreversal(char maze[12][12], size_t xCoord, size_t yCoord, unsigned int direction);
void printMaze(const char maze[][12]);
int validMove(const char maze[][12], size_t r, size_t c);
int coordsAreEdge(size_t x, size_t y);

void main()
{
    // griglia del labirinto
    char maze[12][12] = {
        {'1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'},
        {'1', '0', '0', '0', '1', '0', '0', '0', '0', '0', '0', '1'},
        {'0', '0', '1', '0', '1', '0', '1', '1', '1', '1', '0', '1'},
        {'1', '1', '1', '0', '1', '0', '0', '0', '0', '1', '0', '1'},
        {'1', '0', '0', '0', '0', '1', '1', '1', '0', '1', '0', '0'},
        {'1', '1', '1', '1', '0', '1', '0', '1', '0', '1', '0', '1'},
        {'1', '0', '0', '1', '0', '1', '0', '1', '0', '1', '0', '1'},
        {'1', '1', '0', '1', '0', '1', '0', '1', '0', '1', '0', '1'},
        {'1', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', '1'},
        {'1', '1', '1', '1', '1', '1', '0', '1', '1', '1', '0', '1'},
        {'1', '0', '0', '0', '0', '0', '0', '1', '0', '0', '0', '1'},
        {'1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'}};

    mazeTreversal(maze, X_START, Y_START, RIGHT);
}

void mazeTraversal(char maze[12][12], size_t xCoord, size_t yCoord, unsigned direction)
{
    static int flag = 0;        // flag della posizione di partenza
    maze[xCoord][yCoord] = 'X'; // contrassegna il punto corrente
    printMaze(maze);
    // se il labirinto e' completato
    if (coordsAreEdge(xCoord, yCoord) && xCoord != X_START && yCoord != Y_START)
    {
        puts("\nMaze successfully exited!\n\n");
        return;
    }
    else if (xCoord == X_START && yCoord == Y_START && flag == 1)
    {
        puts("\nArrived back at the starting location.\n\n");
        return;
    }
    else
    { // fai la mossa successiva
        flag = 1;

        for (unsigned int move = direction, count = 0; count < 4; count++, move++, move %= 4)
        {
            switch (move)
            {
            case DOWN:
                if (validMove(maze, xCoord + 1, yCoord))
                {
                    mazeTraversal(maze, xCoord + 1, yCoord, LEFT);
                    return;
                }
                break;

            case RIGHT:
                if (validMove(maze, xCoord, yCoord + 1))
                {
                    mazeTraversal(maze, xCoord, yCoord + 1, DOWN);
                    return;
                }
                break;

            case UP:
                if (validMove(maze, xCoord - 1, yCoord))
                {
                    mazeTraversal(maze, xCoord - 1, yCoord, RIGHT);
                    return;
                }
                break;

            case LEFT:
                if (validMove(maze, xCoord, yCoord - 1))
                {
                    mazeTraversal(maze, xCoord, yCoord - 1, UP);
                    return;
                }
                break;
            }
        }
    }
}

int validMove(const char maze[][12], size_t r, size_t c)
{
    return (r >= 0 && r <= 11 && c >= 0 && c <= 11 && maze[r][c] != '1');
}

int coordAreEdge(size_t x, size_t y)
{
    int areEdge = 1;

    if ((x == 0 || x == 11) && (y >= 0 && y <= 11))
    {
        areEdge = 1;
    }
    else if ((y == 0 || y == 11) && (x >= 0 && x <= 11))
    {
        areEdge = 0;
    }
    return areEdge;
}

void printMaze(const char maze[][12])
{
    for (size_t x = 0; x < 12; x++)
    {
        for (size_t y = 0; y < 12; y++)
        {
            printf("%c ", maze[x][y]);
        }
        puts("");
    }
    puts("\nPremi Invio per vedere la prossima mossa");
    getchar();
}