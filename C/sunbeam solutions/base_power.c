#include <stdio.h>

int power(int b,int p,int *r){
    
    for (int i = 1; i <= p; i++)
    {
        *r *= b;
    }
    return *r;
    
}

int main()
{
    int b,p,r=1;
    printf("Enter Base: ");
    scanf("%d",&b);
    printf("Enter Power: ");
    scanf("%d",&p);

    printf("Result: %d",power(b,p,&r));
    return 0;
}