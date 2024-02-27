#include <stdio.h>
int main()
{
    int empid,dept_no;
    char desi_code;
    printf("Employee Id: ");
    scanf("%d",&empid);

    printf("Department Number: ");
    scanf("%d",&dept_no);

    printf("Designation Code: ");
    scanf(" %c",&desi_code);

    switch (dept_no)
    {
    case 10:
        printf("Employee with employee id %d is working in \"Marketing\" department as",empid);
        break;
    case 20:
        printf("Employee with employee id %d is working in \"Management\" department as",empid);
        break;
    case 30:
        printf("Employee with employee id %d is working in \"Sales\" department as",empid);
        break;
    case 40:
        printf("Employee with employee id %d is working in \"Designing\" department as",empid);
        break;
    default:
        break;
    }
    switch (desi_code)
    {
    case 'M':
        printf(" \"Manager\"");
        break;
    case 'S':
        printf(" \"Supervisor\"");
        break;
    case 's':
        printf(" \"Security Officer\"");
        break;
    case 'C':
        printf(" \"Clerk\"");
        break;
    
    default:
        break;
    }
    return 0;
}