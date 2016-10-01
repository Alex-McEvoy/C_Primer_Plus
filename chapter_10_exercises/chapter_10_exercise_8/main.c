/**********************************************************
*This program takes the values in a multiple dimensional
*array and copies them to another array using a function
*with a variable length array parameter
*
*Date:09/30/16
***********************************************************/



#include <stdio.h>
#define ROW 3
#define COLUMN 5
void copy_array(int rows, int columns, double ar[rows][columns], double copy[rows][columns]);
void show_results(int r, int c, double original[r][c], double transferred[r][c]);

int main()
{
    double stuff[ROW][COLUMN] = {  {1, 2, 3, 4, 5},
                            {6, 7, 8, 9, 10},
                            {11, 12, 13, 14, 15}
                         };

    double trget[ROW][COLUMN];

    copy_array(ROW, COLUMN, stuff, trget);

    show_results(ROW, COLUMN, stuff, trget);


    return 0;
}

void copy_array(int rows, int columns, double ar[rows][columns], double copy[rows][columns])
{
    int count, num;

    for(count=0; count < rows; count++)
        for(num = 0; num < columns; num++)
            copy[count][num] = ar[count][num];
}

void show_results(int r, int c, double original[r][c], double transferred[r][c])
{
    int z, n;

    printf("Your end results are....\n\n");
    for(z=0; z < r; z++)
        for(n = 0; n < c; n++)
            printf("Original values stuff[%d][%d]: %.0lf\n", z, n, original[z][n]);
    for(z=0; z < r; z++)
        for(n = 0; n < c; n++)
            printf("New values trget[%d][%d]: %.0lf\n", z, n, transferred[z][n]);
}
