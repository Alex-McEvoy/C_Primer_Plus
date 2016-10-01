/**********************************************************
This takes an array and copies it to two other arrays using
first array notation and then pointer notation and
incrementation in two separate functions.
Date:09/26/16
***********************************************************/


#include <stdio.h>
void copy_arr(double * ar, double * trgt, int num);
void copy_ptr(double ar[], double trgt1[], int num);

int main()
{
    int count;

    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];

    copy_arr(source, target1, 5);
    copy_ptr(source, target2, 5);

    printf("Your values are:\n");
    for(count = 0; count < 5; count++)
        {   printf("Source[%d]: %0.1lf\n", count, source[count]);
            printf("Target1[%d]: %0.1lf\n", count, target1[count]);
            printf("Target2[%d]: %0.1lf\n", count, target2[count]);
        }
    return 0;
}

void copy_arr(double * ar, double * trgt, int num)
{
    int count;

    for(count = 0; count < num; count++)
        trgt[count] = ar[count];

}

void copy_ptr(double ar[], double trgt2[], int num)
{
    int count;

    for(count = 0; count < num; count++)
        *(trgt2 + count) = *(ar + count);

}
