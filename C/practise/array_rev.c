#include <stdio.h>

void array_rev(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void array_print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array before reverse: ");
    array_print(arr, size);
    printf("\n");
    array_rev(arr, size);
    printf("Array after reverse: ");

    array_print(arr, size);

    return 0;
}
