#include <stdio.h>

int main()
{
    int a,ip,i;
    int arr[ip];
    printf("Number of Inputs: \n");
    scanf("%d",&ip);
    for (i = 0; i < ip; i++)
    {
        printf("Enter %d element: \n",i);
        scanf("%d",&arr[i]);
    }
    for (int k = 0; k < ip; k++)
    {
        printf("Element at Position %d is %d\n",k,arr[k]);
        a=a+arr[k];
       }
        printf("\nSum of elements of array: %d",a);
    
    return 0;
}