#include <stdio.h>
int main()
{
    int m, year;
    printf("Enter month[1 to 12]: ");
    scanf("%d",&m);
    printf("\nEnter Year: ");
    scanf("%d",&year);

    int leap = ((year % 4==0)&&(year%100==0))||(year%400);

    if ((m>=1 && m<=7 && m%2==1)||(m>=8 && m<=12 && m%2==0))
    {
        printf("Number of days in %d/%d are 31",m,year);
    }
    else if (m != 2)
    {
        printf("Number of days in %d/%d are 30",m,year);
    }
    else{
        if (leap==1)
        {
        printf("Number of days in %d/%d are 29",m,year);
        }
        else{
        printf("Number of days in %d/%d are 28",m,year);
        }
        
    }
    
    

    return 0;
}