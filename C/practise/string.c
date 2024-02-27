#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[10], str3[50];
    char str4[] = "are friends";
   
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    
    printf("1 %s\n",str1);
    puts(str1);
    printf("2 %s\n",str2);
    printf("4 %s\n",str4);
    printf("\n");
    printf("this %s",strcpy(str3, strcat(str1, str2)));
    printf("\n");
    printf("char %d\n",strcmp(str2,str1));
    printf("3 %s\n",str3);

    return 0;
}