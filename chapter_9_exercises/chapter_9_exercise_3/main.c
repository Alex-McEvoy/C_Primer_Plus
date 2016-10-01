#include <stdio.h>
void chprint(char, int, int);

int main()
{
    char ch;
    int repeat, rows;

    printf("Please enter a character to be printed.\n");

    ch = getchar();

    printf("Please enter the number of times you'd like character to be printed: \n");
    scanf("%d", &repeat);

    printf("Please enter the number of rows it will be printed on: \n");

    scanf("%d", &rows);

    chprint(ch, repeat, rows);

    printf("\nThank you.\n");

    return 0;
}


void chprint(char c, int a, int b)
{
    int count, row;

    for(row = b; row > 0; row--)
        {for(count = a; count > 0; count--)
            putchar(c);
         putchar('\n');
        }
}
