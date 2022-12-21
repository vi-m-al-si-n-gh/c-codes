#include <stdio.h>
struct employee{
    char    fname[30];
    char    mname[30];
    char    iname[30];
    int     Account_Number;
    float   Balance;
};
int main()
{
    struct employee emp;
    int n;
    printf("enter number of employees:");
    scanf("%d",&n);
    printf("\nEnter details :\n");
    for(int i=0;i<n;i++){
        printf("Father Name:");          
        gets(emp.fname);
        printf("Mother Name:");          
        gets(emp.mname);
        printf("Employee Name:");          
        gets(emp.iname);
        printf("Employee Account Number:");            
        scanf("%d",&emp.Account_Number);
        printf("Employee Balance:");        
        scanf("%f",&emp.Balance);
    }
    for(int i=0;i<n;i++){
        printf("\nEntered detail is:");
        printf("Father Name: %s",emp.fname);
        printf("Mother Name: %s",emp.mname);
        printf("Employee Name: %s",emp.iname);
        printf("Employee Account Number: %d",emp.Account_Number);
        printf("Employee Balance: %f\n",emp.Balance);
    }
    return 0;
}
