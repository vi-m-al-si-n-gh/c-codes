#include<stdio.h>
struct employee
{
     int acc_no;
     char fname[30];
     char mname[30];
     char iname[30];
     int bal;
     struct DoB
     {
         int date;
         int month;
         int year;
     }d[10];
}b[10];
void check(struct employee b[],int n)
{
     int i;
     for(i=0;i<n;i++)
     {
          if(b[i].bal<200)
          {
               printf("Account Number        : %d\n",b[i].acc_no);
               printf("Father Name           : %s\n",b[i].fname);
               printf("Mother Name           : %s\n",b[i].mname);
               printf("Employee Name         : %s\n",b[i].iname);
               printf("Balance               : %d\n",b[i].bal);
               printf("------------------------------\n");
          }
          if(b[i].bal>1000)
          {
               b[i].bal = b[i].bal + 100;
               printf("Account Number        : %d\n",b[i].acc_no);
               printf("Father Name           : %s\n",b[i].fname);
               printf("Mother Name           : %s\n",b[i].mname);
               printf("Employee Name         : %s\n",b[i].iname);
               printf("Balance               : %d\n",b[i].bal);
               printf("------------------------------\n");
          }
     }
}
int main()
{
     int i,n;
     printf("enter n:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          printf("Enter Details of Customer %d\n",i+1);
          printf("------------------------------\n");
          printf("Enter Account Number : ");
          scanf("%d",&b[i].acc_no);
          printf("Enter Father Name           : ");
          scanf("%s",b[i].fname);
          printf("Enter Mother Name           : ");
          scanf("%s",b[i].mname);
          printf("Enter Employee Name         : ");
          scanf("%s",b[i].iname);
          printf("Enter Balance               : ");
          scanf("%d",&b[i].bal);
          printf("Enter Date of birth         : ");
          scanf("%d",&b[i].d[i].date);
          printf("Enter Month of birth        : ");
          scanf("%d",&b[i].d[i].month);
          printf("Enter Year of birth         : ");
          scanf("%d",&b[i].d[i].year);
          printf("DoB- %d:%d:%d",b[i].d[i].date,b[i].d[i].month,b[i].d[i].year);
          printf("\n------------------------------\n");
     }
     check(b,n);
     return 0;
}