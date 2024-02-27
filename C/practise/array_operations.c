#include <stdio.h>

int max_index(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        max = (arr[i] > max) ? arr[i] : max;
        // if (arr[i]>max)
        // {
        //     max = arr[i];
        // }
    }
    return max;
}



int min_index(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        min = (arr[i] < min) ? arr[i] : min;
        // if (arr[i]<min)
        // {
        //     min = arr[i];
        // }
    }
    return min;
}



void array_print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}



int sum_array(int arr[], int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}



int product_array(int arr[], int size){
    int product=1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}



int main()
{
    int size;
    printf("Enter number of elements in array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d index of array: ", i);
        scanf("%d", &arr[i]);
    }
    array_print(arr, size);
    printf("\nMax: %d", max_index(arr, size));
    printf("\nMin: %d", min_index(arr, size));
    printf("\nSum: %d", sum_array(arr, size));
    printf("\nProduct: %d", product_array(arr, size));
    return 0;
}