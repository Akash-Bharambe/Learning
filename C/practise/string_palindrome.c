#include <stdio.h>
#include <string.h>
int string_palindrome(char str[])
{
    char rev[100];
    for (int i = 0; i < strlen(str); i++)
    {
        rev[i] = str[strlen(str) - i - 1];
    }
    rev[strlen(str)] = '\0';

    printf("\nrev: %s", rev);

    if (strcmp(str, rev) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char str[100];
    printf("Enter Your String: ");
    scanf("%s", str);

    if (string_palindrome(str) == 1)
    {
        printf("\nEntered string is palindrome");
    }
    else
    {
        printf("\nEntered string is not Palindrome");
    }
    return 0;
}