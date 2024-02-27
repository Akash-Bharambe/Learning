#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replace(const char *str, const char *oldword, const char *newword)
{
    char *result;
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;
            i += strlen(oldword) - 1;
        }
    }
    result = (char *)malloc(i + count * (strlen(newword) - strlen(oldword)) + 1);

    i = 0;
    while (*str)
    {
        if (strstr(str, oldword) == str)
        {
            strcpy(&result[i], newword);
            i += strlen(newword);
            str += strlen(oldword);
        }
        else
        {
            result[i] = *str;
            i++;
            str++;
        }
    }
    result[i] = '\0';
    return result;
}

int main()
{
    char name[10], item[20], price[10], temp[200];
    printf("Enter customer name: ");
    scanf("%s", name);

    printf("Enter item purchased: ");
    scanf("%s", item);

    printf("Enter price of item: ");
    scanf("%s", price);

    FILE *fileptr = NULL;
    FILE *fileptr2 = NULL;

    fileptr = fopen("bill.txt", "r");
    fileptr2 = fopen("bill_gen.txt", "w");
    fgets(temp, 200, fileptr);

    char *str = replace(temp, "<name>", name);
    str = replace(str, "<item>", item);
    str = replace(str, "<price>", price);

    fprintf(fileptr2, "%s", str);

    free(str);
    fclose(fileptr);
    fclose(fileptr2);
    return 0;
}