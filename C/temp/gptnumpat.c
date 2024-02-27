#include <stdio.h>

int main() {
    int rows, i, j, num;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to iterate through rows
    for (i = 1; i <= rows; i++) {
        num = i;

        // Loop to print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Loop to print decreasing numbers
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }

        // Loop to print increasing numbers excluding the first column
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
