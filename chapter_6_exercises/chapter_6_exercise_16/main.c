#include<stdio.h>

int main()
{
    double num = 1000000;
    int years = 0;


    printf("Chucky Lucky won %.2lf which he put in a bank account that earns 8%% a year."
        " At the end of the year he withdraws $100,000.\n", num);

    while(num > 0)
        {
            num += (num * .08);
            num = num - 100000;
            years += 1;
        }
        printf("\n");


    printf("At the end of %d years, Chuckie will have no money.\n", years);



    return 0;
}
