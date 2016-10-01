/**********************************************************
*This program takes the third though fifth object in a seven
*element array and assigns it to a new three element array.
*
*Date:09/29/16
***********************************************************/


#include <stdio.h>

void copy_ptr(double ar[], double trgt1[], int num);

int main()
{
    int count;

    double source[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target2[3];


    copy_ptr(source + 2, target2, 3);

    printf("Your values are:\n");


    for(count = 0; count < sizeof source / sizeof source[0]; count++)
        printf("Source[%d]: %0.1lf\n", count, source[count]);
    for(count = 0; count < sizeof target2 / sizeof target2[0]; count++)
        printf("Target2[%d]: %0.1lf\n", count, target2[count]);



    return 0;
}


void copy_ptr(double ar[], double trgt2[], int num)
{
    int count;

    for(count = 0; count < num; count++)
        *(trgt2 + count) = *(ar + count);

}
