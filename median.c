#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) 
{
   return ( *(int*)a - *(int*)b );
}
float compute_median(int array[],int n)
{
    float m;
    if(n % 2 == 0)
    {
        m = (array[n/2-1] + array[n/2+1-1]) / 2.0;
    }
    else
    {
        m = array[((n+1)/2)-1];
    }
    return m;
}
void main()
{
    int array[] = {2,8,5,4,1,8};
    int n = 6;
    qsort(array, n, sizeof(array[0]), cmpfunc);
    printf("%f",compute_median(array, n));

}