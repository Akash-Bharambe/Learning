#include <stdio.h>
int fibr(int a)
{
    if (a <= 1)
    {
        return a;
    }
    else
        return fibr(a - 1) + fibr(a - 2);
}

int fibi(int a)
{
    int b = 1, c = 0;
    for (int i = 0; i < a; i++)
    {
        b = c + b;
        c = b - c;
    }
    return c;
}
int main()
{
    int a;
    printf("Upto how many terms fibonacci series is required: ");
    scanf("%d", &a);
    printf("\nFibonacci using iterative: ");

    for (int i = 0; i < a; i++)
    {
        printf(" %d", fibi(i));
    }

    printf("\nFibonacci using recursive: ");
    for (int i = 0; i < a; i++)
    {
        printf(" %d", fibr(i));
    }

    return 0;
}