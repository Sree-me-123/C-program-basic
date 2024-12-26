#include <stdio.h>
int main()
{
    int a,s=0,n=1;
    printf("Enter how much number to add");
    scanf("%d",&a);
    /*while (n<=a)
    {
        s+=n;
        n++;
    }*/
   for (n;n<=a;n++)
   {
    s+=n;
   }
    printf("Sum =%d",s);
return 1;
}