#include <stdio.h>

int armstrong(int n)
{
    int terms = 0, sum = 0, arr[10];
    int og = n;
    while (n > 0)
    {
        n /= 10;
        terms++;
    }
    n = og;

    while (n > 0)
    {
        int digit = n % 10;
        int product = 1;
        for (int i = 0; i < terms; i++)
        {
            product *= digit;
        }
        sum += product;
        n /= 10;
    }
    // ######################################This is also Correct######################################
    //  for (int i = 0; i < terms; i++)
    //  {
    //      arr[i] = og % 10;
    //      og /= 10;
    //  }
    //  for (int j = 0; j < terms; j++)
    //  {
    //      int product = 1;
    //      for (int i = 0; i < terms; i++)
    //      {
    //          product *= arr[j];
    //      }
    //      sum += product;
    //  }
    return (sum == og);
}
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    if (armstrong(a))
    {
        printf("%d is armstrong number", a);
    }
    else
        printf("%d is not armstrong number", a);
    return 0;
}