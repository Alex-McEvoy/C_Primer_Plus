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
    int num;
    char ch;


do{


    printf("Please select a pay rate comensurate with your ability. Be honest, we will kill you.\n");


    printf("*************************************************************\n");
    printf("1.) $8.75/hr                2.) $9.33/hr\n");
    printf("3.) $10.00/hr               4.) $11.20/hr\n");
    printf("5.) Quit\n");
    printf("*************************************************************\n");

    scanf("%d", &num);
    while ( (ch = getchar()) != '\n')                         //this solves the scenario where some asshole inputs a character instead of an integer
            printf("Please don't enter in characters.\n");    //the endless loop resulting from a char results from the computer not storing the char and keeping
                                                              //it in the buffer, which continuously cycles through. This little dab of code clears the buffer in the
    if(num > 0 && num <= 5)                                   //unlikely event of a char.

        {
            switch (num)
                {
                    case 1 : PAY = 8.75;
                             break;
                    case 2 : PAY = 9.33;
                             break;
                    case 3 : PAY = 10.00;
                             break;
                    case 4 : PAY = 11.20;
                             break;
                    case 5 : goto end;
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


            }

    else
        printf("It must be a number between 1 and 5.\n");

    }while(num != 5);

    end: printf("Goodbye.\n");

    return 0;

}











