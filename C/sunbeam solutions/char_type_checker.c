#include <stdio.h>
int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c",&ch);
    if ((ch>='A'&&ch<='Z'))
    {
        printf("%c is an uppercase alphabet ASCII value is %d",ch,(int)ch);
    }
    else if ((ch>='a'&&ch<='z'))
    {
        printf("%c is an lowercase alphabet ASCII value is %d",ch,(int)ch);
    }
    
    else if (ch>='0'&&ch<='9')
    {
        printf("%c is a digit ASCII value is %d",ch,(int)ch);
    }
    else{
        printf("%c is a symbol ASCII value is %d",ch,(int)ch);
    }
    
    return 0;
}