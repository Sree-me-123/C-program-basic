# include <stdio.h>
int primeornot(int);
void range(int,int);

void main()
{
    int strt,end;
    printf("Enter the start and ending range: ");
    scanf("%d%d",&strt,&end);
    range(strt,end);
}

void range(int strt, int end)
{
    int i
    for (i=strt;i<=end;i++)
    {
        if (primeornot(i)==0)
        printf("%d ",i);
    }
}

int primeornot(int n)
{
    int check=0,i;
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            check+=1;
        }
    }
    if (check==2)
    return 0;
    else 
    return 1;
}