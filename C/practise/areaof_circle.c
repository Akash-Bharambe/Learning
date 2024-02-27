#include <stdio.h>
#include <math.h>

#define PI 22 / 7;
float EucledianDistance(int x1, int x2, int y1, int y2)
{
    float distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    return distance;
}

float Manhattondistance(int x1, int x2, int y1, int y2)
{
    unsigned int x = x2 - x1;
    unsigned int y = y2 - y1;
    int distance = x + y;
    return distance;
}

float AreaofCircle(int x1, int x2, int y1, int y2, float (*fptr)(int, int, int, int), float (*mptr)(int, int, int, int), int ip)
{
    if (ip == 1)
    {
        float area = fptr(x1, x2, y1, y2) * PI;
        return area;
    }
    else if (ip == 2)
    {
        float area2 = mptr(x1, x2, y1, y2) * PI;
        return area2;
    }
}
int main()
{
    int x1, x2, y1, y2, ip;
    float (*fptr)(int, int, int, int) = EucledianDistance;
    float (*mptr)(int, int, int, int) = Manhattondistance;
    printf("Press 1 for Eucledian Distance\nPress 2 for Manhatton Distance\nYour Choice:");
    scanf("%d", &ip);

    printf("Enter value of x1: ");
    scanf("%d", &x1);
    getchar();

    printf("Enter value of x2: ");
    scanf("%d", &x2);
    getchar();

    printf("Enter value of y1: ");
    scanf("%d", &y1);
    getchar();

    printf("Enter value of y2: ");
    scanf("%d", &y2);
    getchar();

    if (ip == 1)
    {
        printf("Area of Circle using Eucledian Distance: %g", AreaofCircle(x1, x2, y1, y2, fptr, mptr, ip));
    }
    else if (ip == 2)
    {
        printf("Area of Circle using Manhatton Distance: %g", AreaofCircle(x1, x2, y1, y2, fptr, mptr, ip));
    }

    return 0;
}
