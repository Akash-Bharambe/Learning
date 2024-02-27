#include <stdio.h>
__int128_t fact(int n){
    __int128_t r;
    if (n<=0)
    {
        return 1;
    }
    r = n* fact(n-1);
    return r;
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Factorial: %llu",(unsigned long long)fact(n));
    return 0;
}