#include <stdio.h>


int main()
{
    long int fib1, fib2;
    int num, count;


    printf("Please enter a number of steps to be performed in the Fibonnacci sequence!\n");
    printf("q to quit:\n");


    while(scanf("%d", &num) == 1)
        {
            if(num == 1 || num == 2)
                {fib1 = 1;
                 fib2 = 1;
                }
            else if(num > 2)
                for(count = 3, fib1 = 1, fib2 = 1; count <= num; count++)
                    {if(count % 2 == 1)
                        fib1 += fib2;
                     if(count % 2 == 0)
                        fib2 += fib1;
                    }

        printf("The %dth Fibonnacci sequence number is %ld.\n", num, (num % 2 == 0) ? fib2 : fib1);
        printf("Please enter another number to test. q to quit.\n");


        }

    printf("Goodbye.\n");

    return 0;
}
