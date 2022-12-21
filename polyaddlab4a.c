//Polynomial with single variable addition using array

#include <stdio.h>
#define max 50
int main()
{
    int degree1, degree2, degree3;
    int poly3[max];
    printf("Enter the degree of 1st polynomial");
    scanf("%d",&degree1);
    degree1+=1;
    int poly1[degree1];
    printf("Enter the coefficient of first polynomial");
    for(int i=0;i<degree1;i++)
      scanf("%d",&poly1[i]);
    printf("Enter the degree of 2nd polynomial");
    scanf("%d",&degree2);
    degree2++;
    int poly2[degree2];
    printf("Enter the coefficient of second polynomial");
    for(int i=0;i<degree2;i++)
      scanf("%d",&poly2[i]);
    if(degree1>=degree2)
    {
      degree3=degree1;
      
      for(int i=0;i<degree1;i++)
        poly3[i]=poly1[i];
      for(int i=0;i<degree2;i++)
        poly3[i]+=poly2[i];
    }
    else
    {
      degree3=degree2;
      //int poly3[degree2];
      for(int i=0;i<degree2;i++)
        poly3[i]=poly2[i];
      for(int i=0;i<degree1;i++)
        poly3[i]+=poly1[i];
    }
    printf("\nFirst polynomial:\t");
    for(int i=0;i<degree1;i++)
      printf("%dx^%d+\t",poly1[i],i);
    printf("\nsecond polynomial:\t");
    for(int i=0;i<degree2;i++)
      printf("%dx^%d+\t",poly2[i],i);  
    printf("\nSum polynomial:\t");
    for(int i=0;i<degree3;i++)
      printf("%dx^%d+\t",poly3[i],i);  
    return 0;
}