#include <stdio.h>

int main()
{
    int a;
    int *ptr1 = &a;  // address of a is asigned to ptr1
    int *ptr2 = ptr1;   // address of ptr1 is asigned to ptr2

    printf("Address of a: %d",&a);
    printf("\nAddress of ptr1: %d",ptr1);
    printf("\nAddress of ptr2: %d",ptr2);

    int b;
    ptr1 = &b;
    ptr2 = ptr1;

    printf("\n\n");
    printf("Address of b: %d",&b);
    printf("\nAddress of ptr1: %d",ptr1);
    printf("\nAddress of ptr2: %d",ptr2);

    return 0;
}