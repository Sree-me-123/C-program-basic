# include <stdio.h>
void main()
{
	int a,b,c,d,e,f,g;
	float ans;
	printf("Enter 7 numbers: ");
	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
	ans=((a-b)/c*d+e)*(f+g);
	printf("The answer after performing ((a-b/c*d+e)*(f+g)) is %6.2f",ans);
}
