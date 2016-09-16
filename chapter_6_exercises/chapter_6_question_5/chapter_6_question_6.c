#include <stdio.h>
#define CHAR '$'


int main(void)
{
    int row, count, i, j;

    printf("Enter the number of characters and rows.\n")
    scanf("%d%d", &count, & row);

    for(i = 0; i < row; i++)
        for(j = 0; j < count; j++)
            printf("%c", CHAR);


    return 0;

}
