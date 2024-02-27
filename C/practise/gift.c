#include<stdio.h>
int main()
{
    int maths,science;
    printf("Marks obtained in Maths: \n");
    scanf("%d",&maths);
    printf("Marks obtained in Science: \n");
    scanf("%d",&science);

    if (maths >= 35)
    {
        if (science >=35)
        {
            printf("Congratulations You have Passed both exams you will get a gift or Rs 50");
        }
        else{
        printf("Congratulations You have Passed maths exams you will get a gift or Rs 20");
        }
    }
    else if (science >= 35)
    {
        printf("Congratulations You have Passed Science exams you will get a gift or Rs 20");
    }
    else{
        printf("Sorry you have failed both exams work hard");
    }

    return 0;
}
