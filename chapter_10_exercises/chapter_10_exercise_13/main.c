/**********************************************************
*This program uses several functions to solicit 3 arrays of
*5 doubles, calculate the average of each 5 value set, calculate
*the overall average, find the largest number and report the
*results, all with VLA function parameters.
*Date:09/30/16
***********************************************************/



#include <stdio.h>
#define ROWS 3
#define COLS 5
void get_values(int rows, int cols, double array1[rows][cols]);
void row_average(int cols, double array2[cols]);
double total_average(int rows, int cols, double array3[rows][cols]);
double find_highest(int rows, int cols, double array4[rows][cols]);

int main()
{
    int count;
    double arr[ROWS][COLS];
    double tot_av, high;


    printf("Please enter %d sets of %d double type variables to see some magic.\n", ROWS, COLS);

    get_values(ROWS, COLS, arr);
    for(count = 0; count < 3; count++)
        row_average(COLS, arr + count);    //I get a warning about this but it seems to work fine

    tot_av = total_average(ROWS, COLS, arr);
    high = find_highest(ROWS, COLS, arr);

    printf("The total average is %0.2lf and the highest number is %0.2lf.\n", tot_av, high);

    return 0;
}

void get_values(int rows, int cols, double array1[rows][cols])
{
    int count, num;

    for(count = 0; count < ROWS; count++)
        for(num = 0; num < COLS; num++)
            scanf("%lf", &array1[count][num]);
}

void row_average(int cols, double array2[cols])
{
    int c;
    double subtot;

    for(c = 0, subtot = 0; c < COLS; c++)
        subtot += array2[c];
            printf("Row average: %0.2lf\n", subtot / COLS);

}

double total_average(int rows, int cols, double array3[rows][cols])
{
    int rows1, cols1;
    double total = 0.0;

    for (rows1 = 0; rows1 < ROWS; rows1++)
        for(cols1 = 0; cols1 < COLS; cols1++)
            total += array3[rows1][cols1];

    return total / (ROWS * COLS);
}

double find_highest(int rows, int cols, double array4[rows][cols])
{
    int rows2, cols2;
    double highest;

    for (rows2 = 0, highest = 0; rows2 < ROWS; rows2++)
        for(cols2 = 0; cols2 < COLS; cols2++)
            if(array4[rows2][cols2] > highest)
                highest = array4[rows2][cols2];

    return highest;
}

