#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("\nEnter second number: ");
    scanf("%d",&b);
    printf("\nEnter third number: ");
    scanf("%d",&c);

    printf("\nbefore Swapping: a=%d,b=%d,c=%d",a,b,c);
   
    a=a^b^c;
    b=a^b^c;
    c=a^b^c;
    a=a^b^c;
   
    printf("\nafter Swapping: a=%d,b=%d,c=%d",a,b,c);

    return 0;
}