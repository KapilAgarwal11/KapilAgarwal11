#include<stdio.h>
struct student
{
    int age,roll_no,fees;
    char name[25];
}stud[100];
 
void main()
{
    int i,n;
    printf("Enter the no of students\n");
    scanf("%d",&n);
    printf("enter student info as roll_no , name , age , fees\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d",&stud[i].roll_no,stud[i].name,&stud[i].age,&stud[i].fees);
    }
    printf("\nROLL_NO\t\tNAME\t\tAGE\t\tFEES\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t    %s\t\t%d\t\t%d\t\t\n",stud[i].roll_no,stud[i].name,stud[i].age,stud[i].fees);
    }
}
