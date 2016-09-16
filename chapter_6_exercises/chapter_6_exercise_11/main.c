#include <stdio.h>


int main(void)
{
    int count = 0, sign = 0 ;
    double sum1 = 0.0, sum2 = 0.0, i = 0.0;

    printf("Please enter a number of terms. ");

    while(1 == scanf("%d", &count) && count > 0 )
    {
        sum1 = 0.00;
        sum2 = 0.00;

            for(i = 1.0, sign = 1; i < count; i++, sign *= -1)
                {
                    sum1 += 1.0 / i;
                    sum2 += sign * 1.0/i;
                }


        printf("Your totals are %lf for pattern 1 and %lf for pattern 2.\n", sum1, sum2);
        printf("Please enter a number of terms. ");


    }



    return 0;
}
