#include <windows.h>
#include <stdio.h>

int main()
{
    

    // int risultato = 4;
    // GotoXY(2, 2);
    // printf("Il risultato della tua calcolatrice è: %d", risultato);

    int num1, num2;
    float risultato;
    //char operazione[3];
    int operazione;
    
    // implemento il for per provare tutte e 6 le operazioni (sostituibile con un while)
    for (int i = 0; i < 6; i++)
    {
        system("cls");

        puts("\n");
        printf("1  2  3  +\n");
        printf("4  5  6  -\n");
        printf("7  8  9  *\n");
        printf("   0     \\\n");
        printf("M+ M-    =");

        GotoXY(0, 0);
        
        scanf("%d", &num1);
        //system("cls");
        
        //GotoXY(0, 1);
        //system("cls");
        scanf("%d", &num2);
        
        //GotoXY(0, 1);
        //system("cls");
        scanf("%d", &operazione);
        

        switch (operazione)
        {
            case 1:
                risultato = (float)num1 + num2;
            break;

            case 2:
                risultato = (float)num1 - num2;
            break;

            case 3:
                risultato = (float)num1 * num2;
            break;

            case 4:
                risultato = (float)num1 / num2;
            break;

            /*case 'M+':
                risultato = (float)num1++;
            break;*/

            /*case 'M-':
                risultato = (float)num1--;
            break;*/

            case 5:
                GotoXY(0, 0);
                printf("%.2f", risultato);
            break;

            default:
                printf("Error");
            break;
        }
    }
    system("cls");
    return 0;
}

void GotoXY(int x, int y)
{
    COORD CursorPos = {x, y};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, CursorPos);
}