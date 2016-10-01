#include <stdio.h>
#include <stdbool.h>
double power(double n, int p);

int main()
{
    double x, xpow;
    int exp;



    printf("Please enter a number and a positive or negative integer power\n"
            " to which the number will be raised. Enter q to quit:\n");
        while(scanf("%lf%d", &x, &exp) == 2)
            {
                xpow = power(x, exp);
                printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
                printf("Enter the next pair of numbers or q to quit.\n");
            }
        printf("Recursive functions are ridiculous?.\n");


    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    bool negative = false;

        if(p < 0)
            {p *= -1;
            negative = true;
            }
        if(p == 0)
            pow = 1;
        if(p > 0)
            pow = n * power(n, p-1);
        if(negative)
            pow = 1 / pow;

return pow;
}
