#include<stdio.h>
#define CHAR '$'


int main(void)
{
    int i, j, repeat, rows;

    printf("Choose how many repeats and rows.\n");
    scanf("%d%d", &repeat, &rows);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < repeat; j++)
            printf("%c", CHAR);
        printf("\n");
    }

    return 0;


}
