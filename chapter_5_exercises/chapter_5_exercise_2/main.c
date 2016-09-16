//asks for a number less than 10 and counts up

#include <stdio.h>


int main()
{
    int num, x;

    printf("Give me a number:");
    scanf("%d", &num);
    x = 0;
    while(x++ <= 10)
        {
            printf("%d ", num++);

        }

    return 0;
}
