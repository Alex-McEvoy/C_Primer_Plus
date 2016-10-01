/**********************************************************
*This program takes a two dimensional array of doubles and
*copies it to a second two dimensional array using a separate
*function.
*Date:09/26/16
***********************************************************/


#include <stdio.h>
#define COLS 2
#define ROWS 4
void copy_dbl(double ar[][COLS], double trget[][COLS], int num);

int main()
{
    int count, column;

    double source[ROWS][COLS] = { {1.1, 2.2}, {3.3, 4.4}, {5.5, 6.6}, {7.7, 8.8}, };
    double target1[ROWS][COLS];


    copy_dbl(source, target1, ROWS);

    printf("Your values are:\n");
        for(count = 0; count < ROWS; count++)
            for(column = 0; column < COLS; column++)
            {   printf("Source[%d][%d]: %0.1lf\n", count, column, source[count][column]);
                printf("Target1[%d][%d]: %0.1lf\n", count, column, target1[count][column]);
            }


    return 0;
}

void copy_dbl(double ar[][COLS], double trget[][COLS], int row)
{
    int x, y;

    for(x = 0; x < row; x++)
        for(y = 0; y < COLS; y++)
            *(*(trget + x) + y) = *(*(ar + x) + y); //could have used trget[x][y] = ar[x][y] but I like to live dangerously



}
