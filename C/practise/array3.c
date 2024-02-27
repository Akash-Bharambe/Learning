#include <stdio.h>

char chararray(int ip){
    char arr[ip][50];
   int i;
    for (i = 0; i < ip; i++)
    {
        printf("Enter %d element: \n",i);
        scanf("%s",&arr[i]);
    }
    for (int k = 0; k < ip; k++)
    {
        printf("Element at Position %d is %s\n",k,arr[k]);
       }
    printf("\nSentence made by characters you have entered: ");
    for (int k = 0; k < ip; k++)
    {
        printf("%s ",arr[k]);
       }

}
int intarray(int ip){
    int a=0,i;
    int arr[ip];
    for (i = 0; i < ip; i++)
    {
        printf("Enter %d element: \n",i);
        scanf("%d",&arr[i]);
    }
    for (int k = 0; k < ip; k++)
    {
        printf("Element at Position %d is %d\n",k,arr[k]);
        a=a+arr[k];
       }
    printf("\nSum of elements of array: %d",a);
}

int main()
{
    int ip,i,type;
    int arr[ip];
    printf("Type of Array:\n1. Character Array\n2. Integer Array\nEnter 1 or 2: ");
    scanf("%d",&type);
    
    if (type==1)
    {
        printf("Number of Inputs: \n");
        scanf("%d",&ip);
        chararray(ip);
    }
    else if (type==2)
    {
        printf("Number of Inputs: \n");
        scanf("%d",&ip);
        intarray(ip);
    }
    else{
        printf("Invalid Input.....Quitting...");
    }
    
    return 0;
}