#include <stdio.h>

int checker(int ip)
{
    if (ip >= 0 && ip % 2 == 0)
    {
        return 1;
    }
    else if (ip < 0 && ip % 2 == 0)
    {
        return 2;
    }
    else if (ip >= 0 && ip % 2 == 1)
    {
        return 3;
    }
    else if (ip < 0 && ip % 2 == -1)
    {
        return 4;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int ip;
    printf("Enter number for checking: ");
    scanf("%d", &ip);

    switch (checker(ip))
    {
    case 1:
        printf("%d is an even positive number", ip);
        break;
    case 2:
        printf("%d is an even negative number", ip);
        break;
    case 3:
        printf("%d is an odd positive number", ip);
        break;
    case 4:
        printf("%d is an odd negative number", ip);
        break;

    default:
        break;
    }

    return 0;
}