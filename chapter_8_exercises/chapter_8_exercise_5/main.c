#include <stdio.h>


int main()
{

    int low = 0, high = 100, guess = (high + low) / 2;
    char ch;


    printf("Pick an integer between 1 and 100 and I will try to guess it.\n");
    printf("Respond with a H if the number is high, L if the number is low, \n");
    printf("and a Y if the number is correct!\n");

    printf("Is your number %d?\n", guess);

    while((ch = getchar()) != 'Y')
        {
            if(ch == 'L')
                    low = guess;
            else if(ch == 'H')
                    high = guess;
            else
                {printf("Please enter H, L or Y.\n");

                }
            while(getchar() != '\n')
                        continue;

            guess = (high + low) / 2;
            printf("Is your number %d?\n", guess);


        }

    printf("Hells yeah.\n");


    return 0;
}
