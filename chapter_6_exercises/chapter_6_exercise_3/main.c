#include <stdio.h>
#define CHAR 'F'

int main()
{
    int row, count;
    char ary[6];

    for(row = 0; row < 6; row++)
        {for(count = 0; count <= row; count++)
            {   ary[count]='F' - count;
                printf("%c", ary[count]);
            }

                printf("\n");
            }

        return 0;
}
