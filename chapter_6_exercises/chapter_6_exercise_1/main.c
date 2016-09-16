#include <stdio.h>
#include<string.h>

int main()
{
    char ary[26];
    int count;


    for(count = 0; count < 26;count++)
        ary[count]='a' + count;
    for(count = 0; count < 26; count++)
        printf("%c", ary[count]);
    printf("\n");


    return 0;
}
