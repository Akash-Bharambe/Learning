#include <stdio.h>
void calculate(int a, int b, int *psum, int *ppro);
int main()
{

    int numl, num2, sum, pro;
    printf("enter two numbers: ");
    scanf("%d%d", &numl, &num2);
    calculate(numl, num2, &sum, &pro);
    printf("In Sum = %d\nProduct = %d", sum, pro);
    return 0;
}
void calculate(int a, int b, int *sum, int *pro)
{

    *sum = a + b;
    *pro = a * b;
}