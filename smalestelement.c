# include <stdio.h>
void main()
{
    int n,*point,small,secsmall;
    printf("Enter Number of terms needed in the Array: ");
    scanf("%d",&n);
    int arr[n];
    point=&arr[0];
    for(int i=0;i<n;i++)
    {
        printf("Enter Element %d: ",i+1);
        scanf("%d",point+i);
    }
    small=*point;
    for(int i=0;i<n;i++)
    {
        if(small>*(point+i))
        {
            small=*(point+i);
        }

    }
    printf("Smallest Element is %d ",small);

}