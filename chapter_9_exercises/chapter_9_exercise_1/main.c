#include <stdio.h>
double smaller(void);

int main()
{
    double ans;


    printf("Please enter two numbers to see which is smaller!\n");
    ans = smaller();

    printf("The smaller of your two numbers is %0.2lf.\n", ans);
    return 0;
}

double smaller(void)
{
    double x, y;

    scanf("%lf%lf", &x, &y);
        return (x > y) ? y : x;
}
