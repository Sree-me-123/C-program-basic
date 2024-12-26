# include <stdio.h>
void main()
{
    char str[100],ch;
    int c=0,i=0;
    printf("Enter the String : ");
    scanf("%s",str);
    printf("Enter the character to check :");
    scanf(" %c",&ch);
    while(str[i]!='\0')
    {
        i++;
        if(str[i]==ch)
            c+=1;
    }
    printf("The number of times \"%c\" occours in the string = %d \n",ch,c);
}