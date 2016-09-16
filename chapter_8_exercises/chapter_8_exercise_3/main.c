#include <stdio.h>
#include<ctype.h>

int main()
{
    int ch, is_upper, is_lower;

    is_upper = is_lower = 0;

    printf("Please enter a sentence to find the number of upper and lower case letters!\n");

    while((ch = getchar()) != EOF)
        {
            if(isupper(ch))
                is_upper++;
            if(islower(ch))
                is_lower++;

        }
    printf("Your sentence contains %d capitol %s and %d lower case %s.\n", is_upper, (is_upper > 1) ? "letters": "letter", is_lower, (is_lower > 1) ? "letters": "letter");


    return 0;
}
