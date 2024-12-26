#include <stdio.h>
# include <string.h>
void main()
{
    char str[100][100];
    int n;
    printf("Enter the Number of names needed: ");
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        printf("Enter Name %d: ",i+1);
        fgets(str[i],100,stdin);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
        if(str[j][0]>str[j][j+1])
        {
            char temp[100];
            strcpy(temp,str[j]);
            strcpy(str[j],str[j+1]);
            strcpy(str[j+1],temp);
        }
        }
    }
    for(int i=0;i<n;i++)
    printf("%s",str[i]);
}