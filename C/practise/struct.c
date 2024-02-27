#include <stdio.h>

struct driver
{
    char name[10];
    char dl_no[10];
    char route[100];
    int km;
}d[3];


int main()
{
    for (int i = 0; i < 3; i++)
    {
    printf("Enter name: ");
    scanf("%s",&d[i].name);
    printf("Enter Driving License Number: ");
    scanf("%s",&d[i].dl_no);
    printf("Enter Route: ");
    scanf("%s",&d[i].route);
    printf("Enter kms: ");
    scanf("%d",&d[i].km);
    printf("\n");

    }

    for (int i = 0; i < 3; i++)
    {
    printf("\nDriver %d name is: %s",i+1,d[i].name);
    printf("\nDriving License Numberof %d driver is: %s",i+1,d[i].dl_no);
    printf("\nRoute of %d driver is: %s",i+1,d[i].route);
    printf("\nkms of %d driver are: %d",i+1,d[i].km);
    printf("\n");
    }
    
    return 0;
}