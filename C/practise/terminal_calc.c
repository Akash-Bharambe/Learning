#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    char *operation = argv[1];
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);

    if (argc == 4)
    {
        if (strcmp(operation, "add") == 0)
        {
            printf("%d + %d = %d", a, b, a + b);
        }
        else if (strcmp(operation, "sub") == 0)
        {
            printf("%d - %d = %d", a, b, a - b);
        }
        else if (strcmp(operation, "multiply") == 0)
        {
            printf("%d * %d = %d", a, b, a * b);
        }
        else if (strcmp(operation, "divide") == 0)
        {
            printf("%d / %d = %d", a, b, a / b);
        }
    }
    else
    {
        printf("Enter Proper Input like this:\n<execulatble file> <operation> <number 1> <number 2>");
    }

    return 0;
}