#include <stdio.h>
#include <ctype.h>
#define LIMIT1 17850.00
#define LIMIT2 23900.00
#define LIMIT3 19750.00
#define LIMIT4 14875.00




int main()
{
    int num;
    float income, tax, limit;
    char ch;

    do
    {

         printf("Please specify the tax category into which you fall.\n");
         printf("******************************************************\n");
         printf(" Category\t\t\t\tTax\t\t\t\t\t\n");
         printf("1.) Single\t\t\t15%% of first $17,850 plus 28%% of excess.\n");
         printf("2.) Head of Household\t\t15%% of first $23,900 plus 28%% of excess.\n");
         printf("3.) Married, joint\t\t15%% of first $19,750 plus 28%% of excess.\n");
         printf("4.) Married, Separated\t\t15%% of first $14,875 plus 28%% of excess.\n");
         printf("5.) Exit.\n");
         printf("******************************************************\n");

    scanf("%d", &num);
        while ( (ch = getchar()) != '\n')                         //this solves the scenario where some asshole inputs a character instead of an integer
            printf("Please don't enter in characters.\n");

        if(num > 0 && num < 5)
            {
                switch (num)
                    {
                        case 1 : limit = LIMIT1;
                                    break;
                        case 2 : limit = LIMIT2;
                                    break;
                        case 3 : limit = LIMIT3;
                                    break;
                        case 4 : limit = LIMIT4;
                                    break;
                    }
                printf("Please enter your annual taxable income.\n");

                scanf("%f", &income);

                if(limit == LIMIT1)
                    {   if(income < LIMIT1)
                            tax = income * .15;
                        else
                            tax = ((LIMIT1 * 0.15) + ((income - LIMIT1) * .28));
                    }
                else if(limit == LIMIT2)
                    {   if(income < LIMIT2)
                            tax = income * .15;
                        else
                            tax = ((LIMIT2 * 0.15) + ((income - LIMIT2) * .28));
                    }
                else if(limit == LIMIT3)
                    {   if(income < LIMIT3)
                            tax = income * .15;
                        else
                            tax = ((LIMIT3 * 0.15) + ((income - LIMIT3) * .28));
                    }
                else if(limit == LIMIT4)
                    {   if(income < LIMIT4)
                            tax = income * .15;
                        else
                            tax = ((LIMIT4 * 0.15) + ((income - LIMIT4) * .28));
                    }
                printf("Your taxes are $%0.2f.\n", tax);

            }
        else if(num == 5)
            break;
        else
            printf("Please enter a number between 1 and 5.\n");



    }while(num != 5);

    printf("Goodbye.\n");

    return 0;
}
