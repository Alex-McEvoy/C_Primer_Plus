#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lwr, uppr, sqr_lwr, n, sqr_uppr, sqr, num2;

    printf("Please enter an upper and lower limit to find the sum of every square between them.");
    scanf("%d%d", &lwr, &uppr);
        while(lwr < uppr)
        {
        sqr_lwr = lwr * lwr;
        sqr_uppr = uppr * uppr;
        num2 = 0;

            for(n = lwr; n <= uppr; n++)
            {
                sqr = n * n;
                num2 += sqr;

            }
        printf("The sums of the squares from %d to %d is %d.\n", sqr_lwr, sqr_uppr, num2);
        printf("Please enter an upper and lower limit to find the sum of every square between them. Enter and equal or lesser value for upper to quit.\n");
        scanf("%d%d", &lwr, &uppr);

        }
    return 0;
}
