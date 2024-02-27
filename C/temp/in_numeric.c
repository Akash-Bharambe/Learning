#include <stdio.h>
#include <locale.h>

int main() {
    long long number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%lld", &number);

    // Set the locale to "en_IN" (English_India)
    setlocale(LC_NUMERIC, "en_IN");

    // Print the number with Indian numbering system
    printf("Formatted Number: %lld\n", number);

    return 0;
}
