#include <stdio.h>
#include<ctype.h>
#define STOP '#'


int main()
{
    char ch;
    int c_count, n_count, s_count;

    c_count = n_count = s_count = 0;

    printf("Please input a sentence to find the number of spaces, newline characters \n");
    printf("and all characters in general! (# to quit):\n");

    while((ch = getchar()) != STOP)
        {
            c_count++;
            if(ch == '\n')
                n_count++;
            if(isspace(ch))
                s_count++;


        }
    printf("Your sentence contains %d spaces, %d newline characters and %d characters.\n", s_count, n_count, c_count);
    printf("You're a horrible person!\n");

    return 0;
}
