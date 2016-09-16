#include <stdio.h>


int main(void)
{
    double num, first[9], second[9];
    int count;

    for(count = 0; count < 8; count++)
        {
        printf("Please enter a number for the number %d value in an array!\n", count+1);
        scanf("%lf", &first[count]);
        }
    for(count = 0, num = 0 ;count < 8; count++)
        {
        num += first[count];
        second[count] = num;
        }


    printf("The values of your numbers are...\n");

    for(count = 0; count < 8; count++)
        {
        printf("%.2lf ", first[count]);
        }

    printf("\nThe cumulative values of your numbers are...\n");

        for(count = 0; count < 8; count++)
        {
        printf("%.2lf ", second[count]);
        }


    return 0;
}
