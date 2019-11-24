#include <stdio.h>
#include <windows.h>


#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define SPACE 32

#define WHITE 1
#define BLACK 2
#define NONE 0

int board[19][19];

void gotoxy(int x, int y)
{
    COORD CursorPos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPos);
}

void Print()
{
    int x, y;
    
    board[0][0] = WHITE;
    board[1][1] = BLACK;

    for (y = 0;y < 19;y++) {
        for (x = 0;x < 19;x++) {
            if (board[y][x] == WHITE) printf("○");
            else if (board[y][x] == BLACK) printf("●");

            else if (x == 0 && y == 0) printf("┌");
            else if (x == 0 && y == 18) printf("└");
            else if (x == 18 && y == 0)printf("┐");
            else if (x == 18 && y == 18)printf("┘");
            else if (x == 0) printf("├");
            else if (y == 0) printf("┬");
            else if (x == 18) printf("┤");
            else if (y == 18) printf("┴");
            else printf("┼");

            if (board[y][x] != WHITE&&board[y][x]!= BLACK&&x!=18) printf("─");

        }
        printf("\n");
    }

}

int main() {
    Print();
    int x;
    scanf("%d", &x);
}
