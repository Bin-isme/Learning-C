#include <stdio.h>
#include <math.h>
void check_prime_range(int low, int high)
{
    int isPrime;
    for(int n = low ; n <= high ; n++)
    { 
        if (n == 1 || n == 0)
        {
            continue;
        }    
        isPrime = 1;
        for(int i = 2 ; i <= n/2 ; i++)
        {
            if(n%i==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1)
        {
            printf("%d  ",n);
        }
    }
}
int factorial(int n)
{
    if(n>0)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}
void check_strong_range(int low, int high)
{
    // while(low != high)
    // {
    //     int sum = 0;
    //     int number = low;
    //     while(number != 0)
    //     {
    //         sum += factorial(number % 10);
    //         number /= 10;
    //     }
    //     if(low == sum)
    //     {
    //         printf("%d ",low);
    //     }
    //     low++;
    // }
    for(int i = low ; i <= high ; i++)
    {
        int sum = 0;
        int number = i;
        while(number != 0)
        {
            sum += factorial(number % 10);
            number /= 10;
        }
        if(sum == i)
        {
            printf("%d ",i);
        }
    }
}
void check_armstrong_range(int low, int high)
{
    while(low != high)
    {
        int check = low;
        int sum = 0;
        while(check != 0)
        {
            sum += pow(check%10,3);
            check /= 10;
        }
        if(sum == low)
        {
            printf("%d  ",low);
        }
        low++;
    }
}
void check_perfect_range(int low, int high)
{
    while(low != high)
    {
        int sum = 0;
        for(int i = 1 ; i <= low/2 ; i++)
        {
            if(low%i==0)
            {
                sum += i;
            }
        }
        if(sum == low)
        {
            printf("%d  ",low);
        }
        low++;
    }
}

int power(int base, int exponential)
{
    if(exponential > 0)
    {
        return base * power(base,exponential-1);
    }
    else
    {
        return 1;
    }
}
void print_range(int low, int high)
{
    if(low <= high)
    {
        if(low%2!=0)
        {
            printf("%d",low);
        }
        print_range(low+1,high);
    }
}
int reverse_num(int num)
{
    int digit = log10(num);
    if(num == 0)
    {
        return 0;
    }
    else
    {
        return ((num%10)*pow(10,digit) + reverse_num(num/10));
    }
}
int palidrome(int n)
{
    int n2 = reverse_num(n);
    if(n == n2)
    {
        printf("%d is a palindrome number",n);
    }
    else
    {
        printf("%d is not a palindrome number",n);
    }
}
int sum_of_digit(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n%10 +sum_of_digit(n/=10);
    }
}
void main()
{
    // double number;
    // printf("enter a number: ");
    // scanf("%lf",&number);
    // check_prime(number);
    // check_Armstrong(number);
    // check_perfect(number);
    // int low, high;
    // printf("enter limit: ");
    // scanf("%d %d",&low,&high);
    // check_perfect_range(low,high);
    // printf("%d",power(2,5));
    // print_range(1,10);
    printf("%d",sum_of_digit(1234));
}
