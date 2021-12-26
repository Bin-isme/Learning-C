#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
float function(float x)
{
    return 1 + 1/(1+exp(-x));
}
float compute_PI_recursion(float i)
{
    if(i > 0)
    {
        return pow(-1,i+1)/(2*i-1) + compute_PI_recursion(i-1);
    }
    else
    {
        return 0;
    }
}
float compute_PI_loop(float n)
{
    float result = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        result += pow(-1,i+1)/(2*i-1);
    }
    return 4*result;
}
void softmax(float array[],int length)
{
    float sum = 0;
    for(int i = 0 ; i < length ; i++)
    {
        sum += exp(array[i]);
    }
    for(int j = 0 ; j < length ; j++)
    {
        printf("%.2f\t",exp(array[j])/sum);
    }
}
float find_max(float array[],int length)
{
    float max1 = array[0];
    for(int i = 0 ; i < length ; i++)
    {
        if(max1 < array[i])
        {
            max1 = array[i];
        }
    }
    return max1;
}
void softmax_memoryproblem(float array[],int length)
{
    float max1 = find_max(array,length);
    printf("%f\n",max1);
    float sum = 0.0;
    for(int i = 0 ; i < length ; i++)
    {
        sum += exp(array[i]-max1);
    }
    for(int j = 0 ; j < length ; j++)
    {
        printf("%f\t",exp(array[j]-max1)/sum);
    }
}

float sum_array(float array[])
{
    float sum = 0;
    for(int i = 0 ; i < SIZE ; i++)
    {
        sum += array[i];
    }
    return sum;
}
void print_array(float array[])
{
    srand(time(NULL));
    for(int i = 0 ; i < SIZE ; i++)
    {
        array[i] = rand()%10;
        printf("%.1f\t",array[i]);
    }
    printf("\n%f",sum_array(array));
}
void main()
{
    float array[SIZE];
    print_array(array);
}
