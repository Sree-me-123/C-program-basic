#include <stdio.h>
int main()
{
    printf("Enter the year ");
    int a;
    scanf("%d",&a);
    if (a%4!=0)
    {
        printf("It is not a leap year");
    }
    else
    {
        if (a%100!=0)
        {
            printf("It is a leap year");
        }
       else
        {
            if (a%400==0)
            {
                printf("It is a leap year");
            }
            else 
            {
                printf("It is not a leap year");
            }
        }
    }
}