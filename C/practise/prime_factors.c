#include <stdio.h>

int prime_factor(int ip){

   while (ip%2==0)
   {
    printf("2 ");
    ip/=2;
   }
   for (int i = 3; i*i <= ip; i+=2)
   {
    while (ip%i==0)
    {
        printf("%d ",i);
        ip/=i;
    }
   }
   if (ip>2)
   {
    printf("%d ",ip);
   }
   
}

int main()
{
    int ip;
    printf("For what number do you want to find prime factors: ");
    scanf("%d",&ip);

    printf("Prime Factors of %d are: ",ip);
    prime_factor(ip);

    return 0;
}