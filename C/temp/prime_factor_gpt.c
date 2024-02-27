#include <stdio.h>

void primeFactors(int n) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    // n must be odd at this point. So, a skip of 2 ( i = i + 2) can be used
    for (int i = 3; i * i <= n; i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        printf("%d ", n);
    }
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("Prime factors are not defined for numbers less than 2.\n");
    } else {
        printf("Prime factors of %d are: ", num);
        primeFactors(num);
    }

    return 0;
}
