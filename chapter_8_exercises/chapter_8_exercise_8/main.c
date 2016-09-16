#include <stdio.h>
#include <ctype.h>
char get_choice(void);
char get_first(void);


int main()
{
    char choice, ch;
    float num1, num2;

    while((choice = get_choice()) != 'q')
            {
                printf("Please enter first number:\n");
                while(scanf("%f", &num1) != 1)
                    {
                        while((ch = getchar()) != '\n')
                            printf("%c", ch);
                        printf(" is not a number.\n");
                        printf("Please enter a number, such as 2.5, -1.78e8, or 3:\n");
                    }

               printf("Please enter second number:\n");
                while((1 != (scanf("%f", &num2))) || (num2 == 0 && choice == 's'))
                    {   if(num2 == 0)
                            printf("Please enter a number greater than 0.\n");
                        else
                            printf("Please enter a number, such as 2.5, -1.78e8, or 3:\n");

                        while((ch = getchar()) != '\n')
                                continue;
                    }


                    switch (choice)
                        {
                        case 'a' : printf("%0.2f + %0.2f = %0.2f\n", num1, num2, num1 + num2);
                                    break;
                        case 's' :printf("%0.2f - %0.2f = %0.2f\n", num1, num2, num1 - num2);
                                    break;
                        case 'm' :printf("%0.2f * %0.2f = %0.2f\n", num1, num2, num1 * num2);
                                    break;
                        case 'd' :printf("%0.2f / %0.2f = %0.2f\n", num1, num2, num1 / num2);
                                    break;
                        default :
                            printf("Please enter a correct input.\n");
                                    break;
                        }
            }

        printf("Goodbye.\n");


    return 0;
}






char get_choice(void)
{
    char ch;

    printf("Enter the operation of your choice:\n");
    printf("a. add \t\t s. subtract \nm. multiply \t d. divide \nq. quit\n");

    ch = get_first();
    while(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
            {printf("Please enter either a, s, m, d or q.\n");
             ch = get_first();
            }
return ch;


}

char get_first(void)
{
    char ch;

    while((ch = getchar()) && isspace(ch))
        continue;
    while(getchar() != '\n')
        continue;
return ch;

}



