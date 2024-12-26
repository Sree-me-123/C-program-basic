# include <stdio.h>
int fibonacci(int);
void main()
{
    int num,i;
    printf("Enter the number of terms needed");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d",fibonacci(i));
    }
}
int fibonacci(int num)
{
    if(num==0)
    return 0;
    else if (num==1)
    return 1;
    else 
    return (fibonacci(num-1)+fibonacci(num-2));



}