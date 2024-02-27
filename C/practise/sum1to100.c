#include <stdio.h>

long long int sum(int a) {
    long long int su = 0;
    for (int i = 1; i <= a; i++) {
        su += i;
    }
    return su;
}

int main() {
    int a;
    printf("Upto what number sum is required: ");
    scanf("%d", &a);

    // Use %lld to print a long long int
    printf("\nSum: %lld", sum(a));

    return 0;
}
