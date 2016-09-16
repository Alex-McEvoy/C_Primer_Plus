#include<stdio.h>
#include<math.h>

int main()
{
    float num1, num2, total;

    printf("Please enter two numbers to see the value of their difference divided by their product.\n");
    while(scanf("%f%f", &num1, &num2) == 2)
        {
            total = fabs(num1 - num2) / (num1 * num2);
            printf("The product of the difference of %.2f and %.2f is %.2f.\n", num1, num2, total);
            printf("Please enter two new numbers, enter q to quit.\n");
        }


    return 0;
}
