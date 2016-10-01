/**********************************************************
This program takes an array of doubles and finds the highest
among them using a separate function. It then tests if it
is working in the main() driver.
Date:09/26/16
***********************************************************/
#include <stdio.h>
double highest_test(double ar[], double n);

int main()
{
    double high;

    double source[] = {1.1, 2.2, 3.3, 4.4, 5.5, 9.5, 6.6, 7.7, 8.8};

    high = highest_test(source, sizeof source / sizeof source[0]);

    printf("The highest number in the array is %0.1lf.\n", high);

    return 0;
}

double highest_test(double ar[], double n)
{
    double a = 0;
    int count;

    for(count = 0; count < n; count++)
        {
            if(ar[count] > a)
                a = ar[count];
        }


    return a;
}
