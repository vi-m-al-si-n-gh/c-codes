// C Program to Calculate Gross Salary of an Employee
#include <stdio.h>
struct employee
{
     int acc_no;
     char dname[30];
     char iname[30];
	 char gender[2];
     int bal;
}b[10];
 
int main()
{
    int i,n;
	int Basic,HR,DA,Gross_Salary;
    printf("enter number of employee:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Details of Customer %d\n",i+1);
        printf("------------------------------\n");
		printf("Enter Employee Name         : ");
        scanf("%s",b[i].iname);
		printf("Enter Employee gender       : ");
        scanf("%s",b[i].gender);
        printf("Enter department Name       : ");
        scanf("%s",b[i].dname);
        printf("Enter Basic pay             : ");
        scanf("%d",&b[i].bal);
        printf("------------------------------\n");
		Basic = b[i].bal;
		HR = (Basic * 0.25);
	    DA = (Basic * 0.75); 
	    Gross_Salary = Basic + HR + DA;
        printf("\nGross Salary of this Employee  =  %d", Basic+HR+DA);
    }
  	return 0;
}