#include <stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP EOF

int main()
{
    char ch;
    int letters, word;
    bool inword = false;


    printf("Please enter a sentence to see the average number of letters per word!\n");


    while((ch = getchar()) != STOP)
        {

            if(isalpha(ch) && inword == false)
                {
                    word++;
                    inword = true;
                    letters++;
                }
            else if(isalpha(ch) && inword == true)
                letters++;
            else if(isspace(ch))
                inword = false;

        }
    printf("Your sentence has %d letters and %d words for an average of %d letters per word.\n", letters, word, letters / word);



    return 0;
}
