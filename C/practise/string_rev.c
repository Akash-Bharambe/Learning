#include <stdio.h>
#include<string.h>

void str_rev(char str[]){
    char temp;
    for (int i = 0; i < strlen(str)/2; i++)
    {
        temp = str[i];
        str[i]=str[strlen(str)-i-1];
        str[strlen(str)-i-1] =temp;
    }
    
}

int main()
{
    char str[100];
    printf("Enter a String: ");
    scanf("%s",&str);

    printf("\n~~%s~~\t Size of String: %d",str,strlen(str));
    str_rev(str);
    printf("\n~~%s~~\t Size of String: %d",str,strlen(str));
    return 0;
}