#include <stdio.h>

int main()
{
    int a, c = 0, b = 1;
    printf("Upto how many terms fibonacci series is required: ");
    scanf("%d", &a);
    printf("\nFibonacci: ");
    for (int i = 0; i < a; i++)
    {
        if (i <= 1)
        {
            c = i;
        }
        else
        {
            b = c + b;
            c = b - c;
        }
        printf(" %d", c);
    }

    return 0;
}
