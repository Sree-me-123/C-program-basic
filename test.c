# include <stdio.h>
void main()
{
    char str[]="Today is Tuesday";
    int i=0,len=0,j=0,k;
    while(str[i]!='\0')
    {
        len+=1;i+=1;
    }
    char str2[50];
    i=len;
    for(i;i>=0;i--)
    {
        if(str[i]==' ')
        {
            k=i;
            while((str[k+1]!=' ')&&str[k+1]!='\0')
            {
                str2[j]=str[k+1];
                j++;
                k+=1;
            }
            str2[j++]=' ';
        }
    } 
    for(i=0;str[i]!=' ';i++)
        str2[j++]=str[i];
    printf("%s",str2);
}