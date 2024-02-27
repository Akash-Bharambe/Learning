#include <stdio.h>
#include<string.h>

void parser(char sent[])
{
    int a = 0, b = 0;
    for (int i = 0; i < strlen(sent); i++)
    {
        if (sent[i] == '<')
        {
            a = 1;
            continue;
        }
        else if (sent[i] == '>')
        {
            a = 0;
            continue;
        }
        if (a == 0)
        {
            sent[b] = sent[i];
            b++;
        }
    }
    sent[b] = '\0';
    while (sent[0] == ' ')
    {
        for (int i = 0; i < strlen(sent); i++)
        {
            sent[i] = sent[i + 1];
        }
    }
    while (sent[strlen(sent)-1]==' ')
    {
        sent[strlen(sent)-1]='\0';
    }
    
}
int main()
{
    char sent[] = "   <not needed>   Needed   <not needed>   ";
    parser(sent);
    printf("Parsed sent: ~~%s~~", sent);
    return 0;
}