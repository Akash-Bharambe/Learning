#include <stdio.h>

void matrix_multiplication(int i, int j, int a[][j], int b[][j], int r[][j])
{
    for (int x = 0; x < i; ++x)
    {
        for (int y = 0; y < j; ++y)
        {
            r[x][y] = 0;
            for (int k = 0; k < j; ++k)
            {
                r[x][y] += a[x][k] * b[k][y];
            }
        }
    }
}
// (11,12)     (11,12)
// (21,22)     (21,22)
void array_print(int i, int j, int arr[][j])
{
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            int temp = arr[x][y];
            printf("At i%d j%d index: %d\n", x + 1, y + 1, temp);
        }
    }
}

int main()
{
    int i, j;

    printf("Enter i: ");
    scanf("%d", &i);
    printf("Enter j: ");
    scanf("%d", &j);
    int a[i][j];
    int b[i][j];
    int r[i][j];
    printf("\n");
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf("Enter i%d j%d for a: ", x + 1, y + 1);
            scanf("%d", &a[x][y]);
        }
    }
    printf("\n");

    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf("Enter i%d j%d for b: ", x + 1, y + 1);
            scanf("%d", &b[x][y]);
        }
    }
    printf("\n");
    printf("Array r: \n");
    matrix_multiplication(i, j, a, b, r);
    array_print(i, j, r);

    // printf("\n");
    // printf("Array a: \n");
    // array_print(i,j,a);

    // printf("\n");
    // printf("Array b: \n");
    // array_print(i,j,b);

    return 0;
}