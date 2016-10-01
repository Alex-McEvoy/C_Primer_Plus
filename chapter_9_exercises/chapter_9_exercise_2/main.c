#include <stdio.h>
#include <math.h>
void chline(char, int, int);

int main()
{
    char ch;
    int x, y;

    printf("Please enter a character to be printed.\n");

    ch = getchar();

    printf("Please enter the columns in which you'd like the character printed, \n");
    printf("for example, 2 7 for columns 2 through 7.\n");

    scanf("%d%d", &x, &y);

    chline(ch, x, y);

    printf("\nThank you.\n");

    return 0;
}


void chline(char c, int a, int b)
{
    int lower, diff;

    lower = (a < b) ? a : b;
    diff = fabs(a - b);

    while(--lower > 0)
        putchar(' ');
    while(diff-- >= 0)
        putchar(c);
}
