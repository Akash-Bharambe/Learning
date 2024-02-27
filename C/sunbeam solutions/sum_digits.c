#include <stdio.h>
int main()
{
    int ip,d,og,sum=0;
    printf("Enter Number: ");
    scanf("%d",&ip);
    og = ip;
    while (ip>0)
    {
        d = ip%10;
        sum+= d;
        ip /= 10; 
    }
    printf("Number entered: %d, Sum: %d",og,sum);

    return 0;
}