#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b)
{
    // Cast the void pointers to the appropriate data type
    return (*(int *)b - *(int *)a);
}

int main()
{
    int array[] = {5, 2, 8, 7, 1, 3, 6, 4, 4};
    int arraySize = sizeof(array) / sizeof(array[0]);

    // Using qsort to sort the array
    qsort(array, arraySize, sizeof(int), compare);

    // Printing the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
