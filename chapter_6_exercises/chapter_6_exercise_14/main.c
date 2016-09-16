#include<stdio.h>
#include<string.h>

int main(void)
{

    char ary[255];
    int count;

    printf("Please enter a sentence, followed by the enter key.\n");

    scanf("%[^\n]c", ary);          //uses a scanset character, [^\n] not learned in this chapter but tells the computer to continue to read variables until it hits a newline


    printf("Your sentence is %s.\n", ary);


    printf("Your phrase backwards is ....\n");
    for(count = strlen(ary); count >= 0; --count)
        {
            printf("%c",ary[count]);

        }




   /* while(phrase != '\n')
        {                                               //other shit that didn't work out. I had count set to 0 for these but didnt need it with the new scanset character
            scanf("%c", &ary[count]);
            count++;

        }

    printf("Your phrase is...\n");
        while(phrase != '\n')
            {
                printf("%c", &phrase);
                scanf("%c", &phrase);

            }



*/



    return 0;
}
