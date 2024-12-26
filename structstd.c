# include <stdio.h>
struct student
{
    char name[50];
    int rollno;
    float mark[4];
};
void main()
{
    float score1=0.0,score2=0.0;
    struct student std1,std2;
    printf("Enter the name of Student 1: ");
    fgets(std1.name,50,stdin);
    printf("Enter the Roll Number of Student 1: ");
    scanf("%d",&std1.rollno);
    for(int i=0;i<=2;i++)
    {
        printf("Enter the Mark%d of Student 1: ",i+1);
        scanf("%f",&std1.mark[i]);
        score1+=std1.mark[i];
        
    }
    printf("\n");
    printf("Enter the name of Student 2: ");
    getchar();
    gets(std2.name);
    printf("Enter the Roll Number of Student 2: ");
    scanf("%d",&std2.rollno);
    for(int i=0;i<=2;i++)
    {
        printf("Enter the Mark%d of Student 2: ",i+1);
        scanf("%f",&std2.mark[i]);
        score2+=std2.mark[i];
    }
    printf("\nSTUDENT DETAILS \n\n");
    printf("Name : %s\n",std1.name);
    printf("Roll Number : %d\n",std1.rollno);
    for(int i=0;i<=2;i++)
        printf("Mark %d : %.2f\n",i+1,std1.mark[i]);
    printf("Total Mark : %.2f\n",score1);
    printf("\n");
    printf("Name : %s\n",std2.name);
    printf("Roll Number : %d\n",std2.rollno);
    for(int i=0;i<=2;i++)
        printf("Mark %d : %.2f\n",i+1,std1.mark[i]);
    printf("Total Mark : %.2f\n",score2);
}
