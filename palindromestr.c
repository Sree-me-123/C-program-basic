# include <stdio.h>
# include <string.h>
void main()
{
    char str[50],str2[50];
    int len,i;
    printf("Enter the String : ");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        str2[i]=str[len-1-i];
    }
    str2[i]='\0';
    if(strcmp(str,str2)==0)
        printf("The string is palindrome");
    else
        printf("The string is not palindrome ");
}