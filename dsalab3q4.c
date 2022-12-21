#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[30];
    int marks[5];
    float percentage;
    char grade;
};

int main()
{
    struct student s1;
    int sum = 0;
        printf("------------------------------\n");
		printf("Enter Student Name         : ");
        scanf("%s",&s1.name);
        printf("Enter Roll Number          : ");
        scanf("%d",&s1.roll);
        for(int i =0;i<5;i++)
        {
            printf("Enter %d Subject Marks     : ",i+1);
            scanf("%d",&s1.marks[i]);
        }
        printf("------------------------------\n");
        printf("Student Name  is           : ");
        printf("%s\n",&s1.name);
        printf("student Roll Number is     : ");
        printf("%d\n",s1.roll);
        printf("Students Subject Marks are : ");
        for(int i =0;i<5;i++)
        {
            printf("%d\n",s1.marks[i]);
        }
        for(int i =0;i<5;i++)
        {
           sum= sum + s1.marks[i]; 
        }
        if(sum>=450)
        {
           s1.grade = "A";
        }
        else if(sum<450 && sum>=350)
        {
            s1.grade = "B";
        }
        else if(sum<350 && sum>=250)
        {
            s1.grade = "C";
        }
        else
        {
            s1.grade = "F";
        }
        printf("Grade of the student is %s",&s1.grade);
        s1.percentage = sum/5;
        printf("\nPercentage of the student:%.2f",s1.percentage);
        return 0;
}