#include <stdio.h>

float m(float a)
{
    float temp;
    temp = a * 3.28084;
    return temp;
}

float kilog(float b)
{
    float temp;
    temp = b * 2.20462;
    return temp;
}

float rupe(float c)
{
    float temp;
    temp = c * 0.012;
    return temp;
}

float litr(float d)
{
    float temp;
    temp = d * 1000;
    return temp;
}

int main()
{
    float meter, kg, rupee, litre;
    int i;
    do
    {
        printf("\nWhat do you want to convert:\nPress 1 to convert m to foot\nPress 2 to convert Kg to Pounds\nPress 3 to convert rupee to dollar\nPress 4 to convert litre to ml\nPress 0 to exit\n");

        scanf("%d", &i);
        if (i == 1)
        {
            printf("How much meter is to be converted to foot: ");
            scanf("%f", &meter);
            printf("%g meter = %g foot", meter, m(meter));
        }
        else if (i == 2)
        {
            printf("How much kg is to be converted to pound: ");
            scanf("%f", &kg);
            printf("%g kg = %g pounds", kg, kilog(kg));
        }
        else if (i == 3)
        {
            printf("How much rupee is to be converted to dollar: ");
            scanf("%f", &rupee);
            printf("%g rupee = %g dollar", rupee, rupe(rupee));
        }
        else if (i == 4)
        {
            printf("How much litre is to be converted to ml: ");
            scanf("%f", &litre);
            printf("%g litre = %g ml", litre, litr(litre));
        }
        else if (i == 0)
        {
            printf("Thank You");
        }
        else if (i != 1, 2, 3, 4)
        {
            printf("###############\n#Invalid Input#\n###############");
        }
    } while (i > 0);

    return 0;
}
