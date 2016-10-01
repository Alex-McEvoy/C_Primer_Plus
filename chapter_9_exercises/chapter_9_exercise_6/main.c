#include <stdio.h>
#include <ctype.h>
int ch_report(char);

int main()
{
    char ch;
    int num;

    printf("Please enter a sentence to find whether the characters are letters or not.\n");

    while((ch = getchar()) != EOF )
        {
            num = ch_report(ch);

            printf(" %c is %d ", ch, num);
        }


    return 0;
}

int ch_report(char c)
{
    c = tolower(c);
        if(isalpha(c))
            c -= 96;
        else
            c = -1;
    return c;
}
