/**********************************************************
*This program takes the values in a 3x5 array, doubles
*them, and then prints the before and after values using a
*separate function.
*
*Date:09/30/16
***********************************************************/



#include <stdio.h>
#define COL 5
#define ROW 3
void increase_value(int ar[][COL], int row);
void print_value(int array[][COL], int row);

int main()
{
    int stuff[ROW][COL] =    {     {1, 2, 3, 4, 5},
                                   {6, 7, 8, 9, 10},
                                   {11, 12, 13, 14, 15}
                             };
    print_value(stuff, ROW);

    increase_value(stuff, ROW);

    printf("But now, ");
    print_value(stuff, ROW);

    return 0;
}

void print_value(int array[][COL], int row)
{
    int count, num;

    printf("Your values are...\n");
    for(num = 0; num < row; num++)
        for(count = 0; count < COL; count++)
            printf("stuff[%d][%d]: %d\n", num, count, array[num][count]);

}

void increase_value(int ar[][COL], int row)
{
    int count, num;

     for(num = 0; num < row; num++)
        for(count = 0; count < COL; count++)
            ar[num][count] *= 2;
}
