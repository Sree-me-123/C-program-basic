#include <stdio.h>
void main()
{
    float fah,cel;
    printf("enter any temperature\n");
    scanf("%f",&fah);
    cel=5*(fah-32)/9;
    printf("celsius conversion of %f is %f",fah,cel);
}