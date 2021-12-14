#include <stdio.h>
#include <math.h>
float sum_array(int x[],int n)
{
    float sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += x[i];
    }
    return sum;
}
float sum_x_y(int x[],int y[],int n)
{
    float sum = 0;
    float multi[n];
    for(int i = 0 ; i < n ; i++)
    {
        multi[i] = x[i] * y[i];
    }
    for(int j = 0 ; j < n ; j++)
    {
        sum += multi[j];
    }
    return sum;
}
float sum_array2(int x[],int n)
{
    float sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += pow(x[i],2);
    }
    return sum;
}
float cc(int x[],int y[], int n)
{
    return (n*(sum_x_y(x,y,n))-(sum_array(x,n)*sum_array(y,n))) / ((sqrt(n*sum_array2(x,n)-pow(sum_array(x,n),2))*(sqrt(n*sum_array2(y,n)-pow(sum_array(y,n),2)))));
}
void main()
{
    int x[] = {1,2,3,4,5,6,7,8};
    int y[] = {8,7,6,5,4,3,2,1};
    int n = 8;
    printf("%f\n",sum_array(x,n));
    printf("%f\n",sum_array(y,n));
    printf("%f\n",sum_x_y(x,y,n));
    printf("%f\n",sum_array2(x,n));
    printf("%f\n",sum_array2(y,n));
    printf("%f\n",cc(x,y,n));
}