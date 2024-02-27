#include <stdio.h>

int prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
           return 0;
        }
    }
    return 1;
}

int main()
{
    long long int num;
    int a;
    printf("Enter Number: ");
    scanf("%lld", &num);

    for (int i = 2; i <=num; i++)
    {
        if (prime(i))
        {
            printf("%d is Prime\n", i);
            a++;
        }
    }
    
    printf("Total prime numbers from 1 to %lld = %d",num,a);
    return 0;
}