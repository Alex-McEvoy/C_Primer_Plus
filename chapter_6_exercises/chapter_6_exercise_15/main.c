#include<stdio.h>

int main(void)
{
    double Daphne, Dierdre;
    int years = 0;

    Daphne = Dierdre = 100;

    printf("Daphne and Dierdre both invest $100 dollars at the same time, ");
    printf("with Daphne at 10%% simple interest and Dierdre at 5%% compound interest.\n");

    while(Daphne >= Dierdre)
        {
            Daphne += 10;
            Dierdre += (Dierdre * .05);
            years += 1;
        }

    printf("After %d years, Daphne's investment will be %.2lf and Dierdre's investment will be %.2lf.\n", years, Daphne, Dierdre);



    return 0;

}
