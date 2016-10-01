#include <stdio.h>
double harmonic_mean(double, double);

int main()
{
    double x, y, ans;

    printf("Please enter two numbers to see their harmonic mean!\n");
    scanf("%lf%lf", &x, &y);

    ans = harmonic_mean(x, y);

    printf("The harmonic mean of %0.2lf and %0.2lf is %0.2lf.\n", x, y, ans);

    printf("Thank you.\n");

    return 0;
}

double harmonic_mean(double x, double y)
{
    double temp1, temp2, temp3, ans;

    temp1 = 1 / x;
    temp2 = 1 / y;

    temp3 = (temp1 + temp2) / 2;

    ans = 1 / temp3;

    return ans;
}
