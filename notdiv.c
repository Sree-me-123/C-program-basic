#include<stdio.h>
void main()
{
    int n=1;
    for (n;n<=100;n++)
    {   
        if ((n%3!=0)&&(n%2!=0))
        {
                 printf("%d ",n);
        }
     
    }
}