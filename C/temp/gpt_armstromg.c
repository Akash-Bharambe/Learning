#include <stdio.h>

int isArmstrong(int n) {
    int original = n, sum = 0, count = 0;

    // Count the number of digits
    while (n > 0) {
        n /= 10;
        count++;
    }

    // Reset n to the original value
    n = original;

    // Calculate the sum of cubes of digits
    while (n > 0) {
        int digit = n % 10;

        // Calculate power of digit using a loop
        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= digit;
        }

        sum += power;
        n /= 10;
    }

    // Check if it is an Armstrong number
    return (sum == original);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
