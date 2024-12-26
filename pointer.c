# include <stdio.h>
# include <string.h>
void main()
{
    int a,b,*pointer1,*pointer2,sum;
    pointer1=&a;
    pointer2=&b;
    printf("Enter the First Number : ");
    scanf("%d",pointer1);
    printf("Enter the Second Number : ");
    scanf("%d",&*pointer2);
    sum=*pointer1+*pointer2;
    printf("Sum of %d and %d is %d\n",*pointer1,*pointer2,sum);
    printf("\n");

    // To reverse a string 
    
    char str[50],reverse[50],*strpointer;
    printf("Enter String to Reverse : ");
    scanf("%s",str);
    strpointer=&str[strlen(str)-1];
    int i =0;
    while(str[i]!='\0')
    {
        reverse[i]=*strpointer;
        i++;
        strpointer--;
    }
    reverse[i]='\0';
    printf("The Reversed String is \"%s\"",reverse);
    
}