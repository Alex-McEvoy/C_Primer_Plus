#include <stdio.h>
void larger_of(double *, double *);

int main()
{
    double a, b;


    printf("Please enter two numbers to reset both values to the larger of the two!\n");

    scanf("%lf%lf", &a, &b);

    printf("Your number are originally %0.2lf and %0.2lf.\n", a, b);

    larger_of(&a, &b);

    printf("But now they are %0.2lf and %0.2lf.\n", a, b);

    return 0;
}

void larger_of(double * x, double * y)
{
    double temp;

    temp = (*x > *y) ? *x : *y;

    *x = *y = temp;

}
