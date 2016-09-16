#include <stdio.h>
#define SIZE 8      //Use a defined SIZE to easily change the amount of numbers to be entered

int main()
{
    int ary[8], count;


    printf("Please enter in %d numbers, one at a time. Hit q to quit.\n", SIZE);
    while(scanf("%d", &ary[SIZE-1]) == 1)
        {
            for(count = (SIZE-2); count >= 0; count--)
                {
                    printf("%d more to go now.\n", count + 1);
                    scanf("%d", &ary[count]);

                }

        printf("Your values in reverse are....\n");

            for(count = 0; count < SIZE; count++)
                {

                    printf("%d ", ary[count]);
                }

        printf("Please enter in 8 numbers, one at a time. Hit q to quit, though once you start this game, you've got to see it through, buster.\n");
        }
    return 0;
}
