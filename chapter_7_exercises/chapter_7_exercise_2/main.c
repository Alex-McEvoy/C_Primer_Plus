#include <stdio.h>
#include<ctype.h>
#define STOP '#'

int main()
{
    char ch;
    int  c_count = 0;




    printf("Please enter a sentence to find the ASCII decimal code of each character! (# to stop):\n");

    while((ch = getchar()) != STOP)
        {
            if(isalpha(ch))
               {
                printf("%c %d ", ch, ch);
                c_count++;
               }
            if(c_count % 8 == 0)                //prints 8 character ASCII code pairs per line
                printf("\n");
            if(ch == ' ' || ch == '\n')
                printf("%c", ch);


        }


    return 0;
}
