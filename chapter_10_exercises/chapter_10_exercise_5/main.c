/**********************************************************
This program takes an array of doubles and finds the
difference between the highest and the lowest values.
It then tests if it is working in the main() driver.
Date:09/26/16
***********************************************************/
#include <stdio.h>
double diff_test(double ar[], double n);

int main()
{
    double diff;

    double source[] = {100.00, 2, 21.1, 32.2, 43.3, 4.4, 5.5, 9.5, 6.6, 7.7, 8.8};

    diff = diff_test(source, sizeof source / sizeof source[0]);

    printf("The difference between the highest number and the lowest number is %0.1lf.\n", diff);

    return 0;
}

double diff_test(double ar[], double n)
{
    double a = 0, b = ar[0];  //start b at the first value of the array because there's no starting value that our array numbers are guaranteed to be lower than.
    int count;

    for(count = 0; count < n; count++)
        {
            if(ar[count] > a)
                a = ar[count];
            if(ar[count] < b)   //if b started at 100, our array numbers could be all higher than 100, and our end calculations would be incorrect
                b = ar[count];
        }


    return a - b;
}
