# include <stdio.h>
void main()
{
    int mark,i,sum=0;
    float percent;
    for(i=0;i<5;i+=1)
    {
        printf("Enter the mark outof hundred: ");
        scanf("%d",&mark);
        if (mark<40)
        {
            printf("Failed");
        }
        else 
        {
            sum+=mark;
        }
    }
    percent=(sum/500.0 )*100;
    if (percent>=90)
        {printf("GRADE A+");}
    else if (percent>=80)
        {printf("GRADE A");}
    else if (percent>=70)
        {printf("GRADE B");}
    else if (percent>=60)
        {printf("GRADE C");}
    else if (percent>=60)
        {printf("GRADE D");}
    else 
        {printf("FAILED");}
    
}