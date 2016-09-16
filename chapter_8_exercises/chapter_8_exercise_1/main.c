#include <stdio.h>


int main()
{
    int ch, count;


    printf("Please enter some input.\n");

    while((ch = getchar()) != EOF)
        {
            count++;
        }
        printf("Your input has %d characters.", count);


    return 0;
}
