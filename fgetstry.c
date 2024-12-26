 # include <stdio.h>
 void main()
 {
    char str[60];
    for(int i=0;i<5;i++)
    {
        fgets(str,60,stdin);
        printf("%s",str);
    }
 }