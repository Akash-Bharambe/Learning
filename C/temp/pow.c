#include <stdio.h>
#include<math.h>
int main()
{
    int a,b;
    double c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("\nEnter second number: ");
    scanf("%d",&b);

    printf("\n%g",pow(a,b));
    return 0;
}