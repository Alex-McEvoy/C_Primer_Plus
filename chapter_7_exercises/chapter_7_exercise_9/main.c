#include <stdio.h>
#include<stdbool.h>

int main()
{
    int num, count, div;
    bool isPrime;


    printf("Please enter an integer to see all the prime numbers lower than it!\n");

    scanf("%d", &num);

    for(count = 2; count <= num; count++)
        {
            for(div = 2, isPrime = true; (div * div) <= count; div++)
                {
                    if(count % div == 0)
                        {
                            isPrime = false;

                        }

                }
            if(isPrime)
                printf(" %d ", count);
        }
    return 0;
}
