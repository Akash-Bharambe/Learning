#include <stdio.h>
#include <string.h>

void replaceSubstring(char *str, const char *oldword, const char *newword)
{
    char *pos = strstr(str, oldword);
    if (pos != NULL)
    {
        memmove(pos + strlen(newword), pos + strlen(oldword), strlen(pos + strlen(oldword)) + 1);
        memcpy(pos, newword, strlen(newword));
    }
}

int main()
{
    char name[10], item[20], price[10], temp[200];

    printf("Enter customer name: ");
    scanf("%9s", name);

    printf("Enter item purchased: ");
    scanf("%19s", item);

    printf("Enter price of item: ");
    scanf("%9s", price);

    FILE *inputFile = fopen("bill.txt", "r");
    FILE *outputFile = fopen("gen.txt", "w");

    if (inputFile == NULL || outputFile == NULL)
    {
        perror("Error opening files");
        return 1;
    }

    while (fgets(temp, sizeof(temp), inputFile) != NULL)
    {
        replaceSubstring(temp, "<name>", name);
        replaceSubstring(temp, "<item>", item);
        replaceSubstring(temp, "<price>", price);
        fputs(temp, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Replacement completed. Check 'gen.txt'.\n");

    return 0;
}
