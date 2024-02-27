// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE
// INCOMPLETE

#include <stdio.h>

void right(int ip2)
{
    int add = 1;
    for (int i = 0; i < ip2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", add);
        }
        add++;
        printf("\n");
    }
}

void rightr(int ip2)
{
    int j;
    for (int i = 1; i <=ip2; i++)
    {
        for (j = i; j >0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void eq(int ip2)
{
    int add = 1;
    for (int i = 1; i <= ip2; i++)
    {
        for (int k = i; k < ip2; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            add = j;
            printf("%d", add);
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        add++;
        printf("\n");
    }
}
void eqr(int ip2)
{
    for (int i = ip2; i > 0; i--)
    {
        for (int k = ip2; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 2 * i - 1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int ip1, ip2;
    while (1)
    {
        printf("\nType of number pattern:\n1. Right Angle Triangle\n2. Reverse Right Triangle\n3. Equilateral Triangle\n4. Reverse Equilateral triangle\nPress 0 to Exit\nEnter your choice: ");
        scanf("%d", &ip1);

        if (ip1 == 1)
        {
            printf("Max number of rows: ");
            scanf("%d", &ip2);
            right(ip2);
        }
        else if (ip1 == 2)
        {
            printf("Max number of rows: ");
            scanf("%d", &ip2);
            rightr(ip2);
        }
        else if (ip1 == 3)
        {
            printf("Max number of rows: ");
            scanf("%d", &ip2);
            eq(ip2);
        }
        else if (ip1 == 4)
        {
            printf("Max number of rows: ");
            scanf("%d", &ip2);
            eqr(ip2);
        }
        else if (ip1 == 0)
        {
            printf("\nQuitting...\n");
            goto end;
        }
        else
        {
            printf("\n\nInvalid Input...Please Enter a Valid Input...");
        }
    }
end:
    return 0;
}