#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i = 0;
    char *id;

    while (i < 3) {
        printf("\nEnter number of characters in Employee Id: ");
        if (scanf("%d", &num) != 1 || num <= 0) {
            printf("Invalid input. Please enter a positive integer.\n");
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }

        // Clear the input buffer
        while (getchar() != '\n');

        // Allocate memory for the string, including space for the null terminator
        id = (char *)malloc((num + 1) * sizeof(char));

        if (id == NULL) {
            printf("Memory allocation failed. Exiting program.\n");
            return 1; // Exit with an error code
        }

        printf("Enter Employee Id: ");
        if (fgets(id, num + 1, stdin) == NULL) {
            printf("Error reading input. Exiting program.\n");
            free(id);
            return 1; // Exit with an error code
        }

        printf("Employee id: %s", id);

        // Free the allocated memory
        free(id);

        i++;
    }

    return 0;
}
