#include <stdio.h>
#include <math.h>
float function(int x)
{
    return 1 + 1 / (1 + exp(-x));
}
float factorial(int x)
{
    if(x == 1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x - 1);
    }
}
float function1(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    return (pow(-1,n+1) / (2*n-1)) + function1(n-1);
}
void main()
{
    // printf("%f\n",function(0));
    printf("%f\n",function(1));
    printf("%f\n",factorial(5));
    printf("%f\n",4*function1(4));
}