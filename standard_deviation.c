#include <stdio.h>
#include <math.h>
float compute_mean(int array[],int n)
{
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return (float)sum / n;
}
float compute_variance(int array[],int n, float mean)
{
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += pow((array[i] - mean),2);
    }
    return (float)sum / n;
}
float compute_standard_deviation(float variance)
{
    return sqrt(variance);
}
void main()
{
    int array[5] = {5,3,6,7,4};
    int n = 5;
    float mean = compute_mean(array,n);
    printf("%f\n",mean);
    float variance = compute_variance(array,n,mean);
    printf("%f\n",variance);
    printf("standard deviation = %f\n",compute_standard_deviation(variance));
    
}