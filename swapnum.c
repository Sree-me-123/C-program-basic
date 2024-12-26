# include <stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter two numbers to swap: ");
	scanf("%d%d",&a,&b);
	printf("The numbers before swapping are %d %d \n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("The numbers after swapping are %d %d \n",a,b);
}
	
	
