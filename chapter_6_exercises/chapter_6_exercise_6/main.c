#include <stdio.h>
#include <string.h>

int main()
{
    char word[40];
    int count;



    printf("Please enter a word of your choosing.\n");
    scanf("%s", word);

    for(count = strlen(word); count >= 0; count--)
        printf("%c", word[count]);


    return 0;
}
