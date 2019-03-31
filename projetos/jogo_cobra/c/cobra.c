// Jogo da Cobra (Snake Game)
// Autor: Rodrigo Schio
// Adaptado por: Gilson Pereira
// Código fonte original: http://snakedevc.appspot.com

#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>

void mgotoxy(int x, int y)
{
    COORD p = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

int main()
{
    int x, d = 2, cx[300] = {1, 2}, cy[300] = {7, 7}, t = 1, mx, my;
    char tecla = 'a';

    for (x = 0; x < 18; x++)
    {
        mgotoxy(0, x);
        printf("%c", 219);
    }

    for (x = 0; x < 26; x++)
    {
        mgotoxy(x, 0);
        printf("%c", 219);
    }

    for (x = 0; x < 18; x++)
    {
        mgotoxy(26, x);
        printf("%c", 219);
    }

    for (x = 0; x < 27; x++)
    {
        mgotoxy(x, 18);
        printf("%c", 219);
    }

    srand(time(NULL));
    mx = (rand()%25) + 1;
    my = (rand()%17) + 1;

    while (tecla != 's')
    {
        while (tecla != 's' && !(tecla = kbhit()))
        {
            for (x = t; x > 0; x--)
            {
                cx[x] = cx[x-1];
                cy[x] = cy[x-1];
            }

            if (d == 0)
                cx[0]--;

            if (d == 1)
                cy[0]--;

            if (d == 2)
                cx[0]++;

            if (d == 3)
                cy[0]++;

            mgotoxy(cx[t], cy[t]);
            printf(" ");

            if (mx == cx[0] && my == cy[0])
            {
                t++;
                mx = (rand()%25) + 1;
                my = (rand()%17) + 1;
            }

            mgotoxy(cx[0], cy[0]);
            printf("%c", 219);
            mgotoxy(mx, my);
            printf("%c", 1);
            Sleep(200);

            for (x = 1; x < t; x++)
            {
                if(cx[0] == cx[x] && cy[0] == cy[x])
                    tecla = 's';
            }

            if (cy[0] == 0 || cy[0] == 18 || cx[0] == 0 || cx[0] == 26)
                tecla = 's';
        }

        if (tecla != 's')
            tecla = getch();

        if (tecla == 'K')
            d = 0;

        if (tecla == 'H')
            d = 1;

        if (tecla == 'M')
            d = 2;

        if (tecla == 'P')
            d = 3;

        if (cy[0] == 0 || cy[0] == 18 || cx[0] == 0 || cx[0] == 26)
            tecla = 's';
    }

    getch();
    return 0;
}