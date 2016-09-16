#include <stdio.h>


int main()
{
    int count = 0;
    char ch;

    printf("Please enter a sentence to see your exclamation marks and periods magically \n");
    printf("changed! (# to quit):\n");

    while((ch = getchar()) != '#')
        {
            if(ch == '.')
                {
                    printf("!");
                    count++;
                }
            else if(ch == '!')
                {
                    printf("!!");
                    count++;
                }
            else
                putchar(ch);
        }
    printf("%d changes made to your super interesting sentence.\n", count);


    return 0;
}
