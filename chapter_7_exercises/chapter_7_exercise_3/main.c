#include <stdio.h>


int main()
{
    float evens, odds, evn_count, odd_count;
    int num;


    evens = odds = evn_count = odd_count = 0;

    printf("Please enter a series of integers to find the number of evens, \n");
    printf("the number of odds, and the averages for both groups! (0 to quit):\n");

    while((scanf("%d", &num)) == 1 && num != 0)
        {
            if(num % 2 == 0)
                {
                    evn_count++;
                    evens += num;

                }
            else
                {
                    odd_count++;
                    odds += num;
                }

        }

    printf("The number of even integers is %0.2f whose average is %0.2f. The number of odds is %0.2f whose average is %0.2f\n.",
                evn_count, evens / evn_count, odd_count, odds / odd_count);

    return 0;
}
