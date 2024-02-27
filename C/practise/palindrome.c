#include <stdio.h>

int main()
{
    int n, rev = 0, og, digit;
    printf("Enter number: ");
    scanf("%d", &n);
    og = n;
    while (n != 0)
    {
        digit = n % 10;
        n /= 10;
        rev = rev * 10 + digit;
    }
    if (og == rev)
    {
        printf("%d is palindrome number", og);
    }
    else
        printf("%d is not palindrome", og);

    return 0;
}
