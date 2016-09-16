#include <stdio.h>


int main()
{
    double count, lwr_limit, hgh_limit;

    printf("Please enter a number range to get a table of those number's squares and cubes.\n");
    scanf("%lf%lf", &lwr_limit, &hgh_limit);

    printf("Number      Square      Cube\n");
    for(count = lwr_limit; count <= hgh_limit; count++)
        printf("%.0lf           %.0lf           %.0lf\n",count, (count * count), (count * count * count));



    printf("Thanks for playing, fuckhead!\n");
    return 0;
}
