#include <stdio.h>


int main()
{
    int flag = 0, count = 0;
    char ch;

    printf("Please enter a sentence to see your exclamation marks and periods magically \n");
    printf("changed! (# to quit)(this time with switch)\n");
    printf("(but you don't really care about that, do you?):\n");

    while((ch = getchar()) != '#')
        {
            switch(ch)
            {
                case '.' : printf("!");
                           count++;
                           break;
                case '!' : printf("!!");
                           count++;
                           break;
                case '\n': flag++;
                           printf("\nEnter another sentence or hit #.\n");
                           break;
                default : putchar(ch);
                           break;

            }

        }

    printf("\n%d %s made to your super interesting %s.\n", count, (count > 1) ? "changes": "change", (flag > 1) ? "sentences":"sentence");


    return 0;
}
