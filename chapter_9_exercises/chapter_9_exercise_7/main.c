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
        printf("Was it good for you too, baby?.\n");


    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;
    bool negative = false;

        if(p < 0)
            {p *= -1;
            negative = true;
            }
        if(p == 0)
            pow = 1;
        else
            for(i = 1; i <= p; i++)
                pow *= n;
        if(negative)
            pow = 1 / pow;

return pow;
}
