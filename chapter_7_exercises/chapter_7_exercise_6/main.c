#include <stdio.h>
#include<stdbool.h>

int main()
{
    bool mark;
    char ch;
    int count = 0;

    printf("Please enter a sentence to see how many times the sequence \"ei\" occurs.\n");
    printf("# to quit:\n");

    while((ch = getchar()) != '#')
        {
            if(ch == 'e')
                mark = true;
            else if(ch == 'i' && mark == true)
                count++;
            else
                mark = false;

        }
   printf("Your sentence had the sequence \"ei\" %d times in it!\n", count);


    return 0;
}
