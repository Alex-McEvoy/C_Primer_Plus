/**********************************************************
*This program uses several functions to solicit 3 arrays of
*5 doubles, calculate the average of each 5 value set, calculate
*the overall average, find the largest number and report the
*results.
*Date:09/30/16
***********************************************************/



#include <stdio.h>
#define ROWS 3
#define COLS 5
void get_values(double array1[ROWS][COLS]);
void row_average(double array2[COLS]);
double total_average(double array3[ROWS][COLS]);
double find_highest(double array4[ROWS][COLS]);

int main()
{
    int count;
    double arr[ROWS][COLS];
    double tot_av, high;


    printf("Please enter 3 sets of 5 double type variables to see some magic.\n");

    get_values(arr);
    for(count = 0; count < 3; count++)
        row_average(arr + count);    //I get a warning about this but it seems to work fine

    tot_av = total_average(arr);
    high = find_highest(arr);

    printf("The total average is %0.2lf and the highest number is %0.2lf.\n", tot_av, high);

    return 0;
}

void get_values(double array1[ROWS][COLS])
{
    int count, num;

    for(count = 0; count < ROWS; count++)
        for(num = 0; num < COLS; num++)
            scanf("%lf", &array1[count][num]);
}

void row_average(double array2[COLS])
{
    int c;
    double subtot;

    for(c = 0, subtot = 0; c < COLS; c++)
        subtot += array2[c];
            printf("Row average: %0.2lf\n", subtot / COLS);

}

double total_average(double array3[ROWS][COLS])
{
    int rows1, cols1;
    double total = 0.0;

    for (rows1 = 0; rows1 < ROWS; rows1++)
        for(cols1 = 0; cols1 < COLS; cols1++)
            total += array3[rows1][cols1];

    return total / (ROWS * COLS);
}

double find_highest(double array4[ROWS][COLS])
{
    int rows2, cols2;
    double highest;

    for (rows2 = 0, highest = 0; rows2 < ROWS; rows2++)
        for(cols2 = 0; cols2 < COLS; cols2++)
            if(array4[rows2][cols2] > highest)
                highest = array4[rows2][cols2];

    return highest;
}

