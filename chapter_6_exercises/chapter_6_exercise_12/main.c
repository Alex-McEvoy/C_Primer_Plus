
#include <stdio.h>
#include <math.h>

int main(void)
{
    int ary[9];
    int count;

    for(count = 0; count < 9; count++)
        {
            ary[count] = pow(2,count);
        }

    count = 0;
    printf("The first 8 powers of 2 are...\n");
    do
        {


            printf("%d ", ary[count]);
            count++;
        }while(count < 9);


    return 0;
}
