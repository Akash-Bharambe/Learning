#include <stdio.h>

void right(int ip2)
{
    for (int i = 0; i < ip2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void rightr(int ip2)
{
    for (int i = ip2; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

void eq(int ip2)
{
    for (int i = 1; i <= ip2; i++)
    {
        for (int k = i; k < ip2; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
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


void square(int ip2){
    for (int i = 0; i < ip2; i++)
    {
        for (int j = 0; j < ip2; j++)
        {
        printf("* ");
            
        }
        printf("\n");
        
    }
    
}


int main()
{
    int ip1, ip2;
    while (1)
    {
        printf("\nType of star pattern:\n1. Right Angle Triangle\n2. Reverse Right Triangle\n3. Equilateral Triangle\n4. Reverse Equilateral triangle\n5. Square\nPress 0 to Exit\nEnter your choice: ");
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
        else if (ip1 == 5)
        {
            printf("Side of Square: ");
            scanf("%d", &ip2);
            square(ip2);
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