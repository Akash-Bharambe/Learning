#include<stdio.h>
int main(void)
{
    printf("Which number table do you want: \n");
    int num,upto;
    scanf("%d",&num);
    printf("upto: \n");
    scanf("%d",&upto);
    for (int i = 1; i <= upto; i++)
    {
        printf("%d * %d = %d\n\a",num,i,num*i);
    }

    return 0;
}