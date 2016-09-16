#include <stdio.h>
#define PAY 10.00
#define OVERTIME 15.00
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define BREAK1 300.00
#define BREAK2 450.00
#define BASE1 (RATE1 * BREAK1)
#define BASE2 (BASE1 + (RATE2 *(BREAK2 - BREAK1)))


int main()
{
    float hours, gross_pay, taxes, net_pay;

    printf("Please enter the number of hours you worked this week. (q to quit):\n");

    while((scanf("%f", &hours)) != 0)
        {
            gross_pay = hours * PAY;

            if(hours > 40)
                gross_pay = (40 * PAY) + ((hours - 40) * OVERTIME);

            if((gross_pay) <= BREAK1)
                {
                    taxes = gross_pay * RATE1;
                    net_pay = gross_pay - taxes;
                }
            else if((gross_pay) <= BREAK2)
                {
                    taxes = BASE1 + ((gross_pay - BREAK1) * RATE2);
                    net_pay = gross_pay - taxes;
                }
            else
                {
                    taxes = BASE2 + ((gross_pay - BREAK2) * RATE3);
                    net_pay = gross_pay - taxes;
                }

        printf("\nYou worked %0.2f hours this week, for a Gross pay of $%0.2f, taxed $%0.2f for a net pay of $%0.2f.\n", hours, gross_pay, taxes, net_pay);
        printf("Please enter some new hours or hit q.\n");
        }


    return 0;
}
