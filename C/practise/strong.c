#include <stdio.h>

int fact(int num)
{
    int fact = 1;
    for (int i = num; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}

void strong(int ip)
{
    int num, sum = 0, og = ip;
    while (ip != 0)
    {
        num = ip % 10;
        sum += fact(num);
        ip /= 10;
    }

    if (sum == og)
    {
        printf("%d is Perfect number", og);
    }
    else
    {
        printf("%d is not perfect", og);
    }
}

int main()
{
    int ip;
    printf("Enter Number: ");
    scanf("%d", &ip);

    strong(ip);
    return 0;
}