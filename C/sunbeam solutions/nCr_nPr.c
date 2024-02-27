#include <stdio.h>
long long int fact(int a)
{
    long long int b;
    if (a <= 0)
    {
        return 1;
    }
    b = a * fact(a - 1);
    return b;
}

long long int permutation(int n, int r)
{
    return (fact(n) / fact(n - r));
}

long long int combinaion(int n, int r)
{
    return (permutation(n,r) / fact(r));
    // return (fact(n) / (fact(r) * fact(n - r)));
}




int main()
{
    int n, r;
    printf("n items: ");
    scanf("%d", &n);
    printf("r items: ");
    scanf("%d", &r);

    printf("nCr: %lld", combinaion(n, r));
    printf("\tnPr: %lld", permutation(n, r));

    return 0;
}