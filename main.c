#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // getch()
#include <unistd.h> // usleep()
void gotoxy(int row,int col)
{
    printf("\033[%d;%dH", row, col);
}

int main()
{
    const int num_rows = 14;
    const int num_columns = 40;
    const int s = 10000; //stay

    system("cls"); // cleaning

    // start
    for(int y = num_rows/2; y>=1 ; y--)
    {
        for(int x=1; x<num_columns; x++)
        {
            if(y%2==0 )
            {
                gotoxy(y,num_columns-x);
                printf("\6");
                usleep(s);

                gotoxy(num_rows-y+1,num_columns-x);
                printf("\6");
                usleep(s);
            }
            else
            {
                gotoxy(y,x);
                printf("\6");
                usleep(s);

                gotoxy(num_rows-y+1,x);
                printf("\6");
                usleep(s);
            }
        }
    }
    // finish

    getch(); // stop

    return 0;
}
