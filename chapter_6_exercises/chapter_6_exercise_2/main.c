#include <stdio.h>
#define CHAR '$'

int main()
{
    int row, count;

    for(row = 0; row < 5; row++)
        {for(count = 0; count <= row; count++)
            printf("%c", CHAR);
        printf("\n");
        }


    return 0;
}
