#include <stdio.h>
#define SPACE ' '

int main()
{

    int row, count;
    char ch, ary[6];


    printf("Please enter an upper case letter.");
    scanf("%c", &ch);

    for(row = 0; row < 5; row++)
    {
        for(count = 6; count > row; count--)
            printf("%c", SPACE);
        for(count = 0; count <= row; count++)
            {   ary[count] = ch + count;
                printf("%c", ary[count]);
            }
        for(count = row; count >= 1; count--)
                printf("%c", ary[count]-1);

                printf("\n");


    }
    return 0;
}
