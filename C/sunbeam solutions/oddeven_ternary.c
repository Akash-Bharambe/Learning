#include <stdio.h>
int main()
{
    int num;
    char* type;
    printf("Enter Number you want to check if it is odd or even: ");
    scanf("%d",&num);

    if (num %2 ==0)
    {
        printf("output using if else: \n%d is an Even Number\n",num);
    }
    else{
        printf("output using if else: \n%d is Odd Number\n",num);
    }

    type=(num%2==0)? "even" :"odd";
    printf("Output using ternary operator:\n%d is %s",num,type);

    return 0;
}