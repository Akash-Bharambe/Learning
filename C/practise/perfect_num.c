#include <stdio.h>

void perfect_checker(int ip)
{
    int sum = 0;
    // Loop to find divisors and accumulate their sum
    for (int i = 1; i <= ip / 2; i++) {
        if (ip % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the number itself
    if (sum == ip && ip != 0) {
        printf("%d is a Perfect number\n", ip);
    } else {
        printf("%d is not a Perfect number\n", ip);
    }
}

int main()
{
    int ip;
    printf("Enter a number to check if it is perfect number: ");
    scanf("%d", &ip);

    perfect_checker(ip);
    return 0;
}
