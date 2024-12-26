# include <stdio.h>
void fibonocci(int);
void main()
{
    int num;
    printf("Enter the number of terms needed: ");
    scanf("%d",&num);
    fibonocci(num);
}

void fibonocci(int num)
{
    int first=0,second=1,temp,i;
    for(i=0;i<num;i++)
    {
        printf("%d ",first);
        temp=first;
        first=second;
        second=temp+first;
    }
}