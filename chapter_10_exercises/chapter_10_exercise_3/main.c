/**********************************************************
This program takes an array of integers and finds the highest
among them using a separate function. It then tests if it
is working in the main() driver.
Date:09/26/16
***********************************************************/
#include <stdio.h>
int highest_test(int ar[], int n);

int main()
{
    int high;

    int source[] = {1, 2, 3, 4, 5, 9, 6, 7, 8};

    high = highest_test(source, sizeof source / sizeof source[0]);

    printf("The highest number in the array is %d.\n", high);

    return 0;
}

int highest_test(int ar[], int n)
{
    int a = 0;
    int count;

    for(count = 0; count < n; count++)
        {
            if(ar[count] > a)
                a = ar[count];
        }


    return a;
}
