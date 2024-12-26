#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    float b;
    printf("Enter a number ");
    scanf("%d",&a);
    if (a%2==0)
    {
        b=sqrt(a);
        printf("%d is an even number\n",a);
        printf("sqrt = %f",b);
    }
    else
    {
        printf("The number odd");
    }
    return 0;
}