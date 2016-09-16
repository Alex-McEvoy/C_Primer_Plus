#include<stdio.h>
#define SIXTY 60

int main(void)
{
    int time, hrs, mins;


    printf("Enter a time in minutes, use zero to end:");
    scanf("%d", &time);



    while(time > 0)
    {
    hrs = time / SIXTY;
    mins = time % SIXTY;

    printf("Well, you sorry sack of shit. It appears that the time that you"
            " entered, %d minutes, is actually %d hours, %d minutes.\n", time, hrs, mins);
    printf("Shall we go again? Enter a new number or 0 to quit:");
    scanf("%d", &time);

    }

    printf("Well fine then, asshole.\n");

    return 0;
}
