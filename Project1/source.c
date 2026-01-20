#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define RIGHT 77
#define DOWN 80
#define LEFT 75

void position(int x, int y)
{
    COORD position = { x, y };

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
    // position(5, 5);

    // printf("¡Ú");

    char key;

    
    
    while (1)
    {
        key = _getch();

        switch (key)
        {
        case UP:
            printf("¡è");
            break;
        case LEFT:
            printf("¡ç");
            break;
        case RIGHT:
            printf("¡æ");
            break;
        case DOWN:
            printf("¡é");
            break;
         
        }
    }

    return 0;
}
