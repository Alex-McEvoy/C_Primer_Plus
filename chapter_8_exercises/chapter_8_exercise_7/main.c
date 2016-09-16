#include <stdio.h>
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
    float hours, PAY, gross_pay, taxes;
    char ch;


do{


    printf("Please select a pay rate comensurate with your ability. Be honest, we will kill you.\n");


    printf("*************************************************************\n");
    printf("a.) $8.75/hr                b.) $9.33/hr\n");
    printf("c.) $10.00/hr               d.) $11.20/hr\n");
    printf("q.) Quit\n");
    printf("*************************************************************\n");

    ch = getchar();

    if((ch >= 'a' && ch <= 'd') || ch == 'q')

        {
            switch (ch)
                {
                    case 'a' : PAY = 8.75;
                             break;
                    case 'b' : PAY = 9.33;
                             break;
                    case 'c' : PAY = 10.00;
                             break;
                    case 'd' : PAY = 11.20;
                             break;
                    case 'q' : goto end;
                }



            printf("Please enter the number of hours you worked this week:\n");

            scanf("%f", &hours);

                    gross_pay = hours * PAY;

                    if(hours > 40)
                        gross_pay = (40 * PAY) + ((hours - 40) * OVERTIME);

                    if((gross_pay) <= BREAK1)
                            taxes = gross_pay * RATE1;
                    else if((gross_pay) <= BREAK2)
                            taxes = BASE1 + ((gross_pay - BREAK1) * RATE2);
                    else
                            taxes = BASE2 + ((gross_pay - BREAK2) * RATE3);

            printf("\nYou worked %0.2f hours this week, for a Gross pay of $%0.2f, taxed $%0.2f for a net pay of $%0.2f.\n", hours, gross_pay, taxes, gross_pay - taxes);
            while(getchar() != '\n')
                continue;

        }

    else
        printf("Please enter a letter a through d. (q to quit)\n");

    }while(ch != 'q');

    end: printf("Goodbye.\n");

    return 0;

}











