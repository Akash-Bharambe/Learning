#include <stdio.h>

int prime_factor(int ip)
{

    for (int i = 1; i <= ip / 2; i++) {
        if (ip % i == 0) {
            printf("%d ",i);
        }
    }
}

int main()
{
    int ip;
    printf("For what number do you want to find prime factors: ");
    scanf("%d", &ip);

    printf("Prime Factors of %d are: ", ip);
    prime_factor(ip);

    return 0;
}