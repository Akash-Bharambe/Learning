#include <stdio.h>
void swap(int *a,int *b){
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}
int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    printf("Before swapping\t\ta=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping\t\ta=%d,b=%d",a,b);
    return 0;
}