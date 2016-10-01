/**********************************************************
*This program takes two arrays and sums their respective
*values, then assigns each value to the same respective
*location in a third array.
*
*Date:09/30/16
***********************************************************/



#include <stdio.h>
#define SIZE 4
void sum_arrays(int first[], int second[], int third[], int size);

int main()
{
    int count;

    int array1[] = {1, 2 , 3 , 4};
    int array2[] = {5, 6 , 7 , 8};

    int array3[SIZE];

    sum_arrays(array1, array2, array3, SIZE);

    printf("Your final values are....\n");

    for(count = 0; count < SIZE; count++)
        {
            printf("array1: %d\n", array1[count]);
            printf("array2: %d\n", array2[count]);
            printf("array3: %d\n", array3[count]);
        }

    return 0;
}

void sum_arrays(int first[], int second[], int third[], int size)
{
    int count;

    for(count = 0; count < size; count++)
        third[count] = first[count] + second[count];
}
