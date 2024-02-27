#include <stdio.h>

void as(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b - *b;
}

int main()
{
    int a, b;
    printf("a: ");
    scanf("%d", &a);
    printf("\nb: ");
    scanf("%d", &b);
    as(&a, &b);
    printf("Sum: %d,Sub: %d", a, b);
    return 0;
}