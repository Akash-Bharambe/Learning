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

    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    if (prime(num))
    {
        printf("%d is Prime", num);
    }
    else
    {
        printf("%d is not Prime", num);
    }
    return 0;
}