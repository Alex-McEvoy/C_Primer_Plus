#include <stdio.h>


int main()
{
    int ch, counter = 0;

    printf("Please enter in a sentence to see the various character's ASCII decimal value.\n");

    while((ch = getchar()) != EOF)
        {
            counter++;
            if(ch == 10)
                {printf(" \\n ");
                 printf("\n");
                 counter = 0;
                }
            else if(ch == 9)
                printf(" \\t ");
            else if(ch < 32)
                {
                    ch += 64;
                    printf(" \^%c ", ch);
                }
            else
                {   putchar(ch);
                    printf(" %d ", ch);
                }

            if (counter >= 10)
                {
                    counter = 0;
                    printf("\n");
                }
        }

    printf("%d", ch);

    return 0;
}
