//Polynomial multiplication
#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter degree of 1st polynomial");
    scanf("%d",&n);
    n=n+1;
    int p1[n];
    printf("Enter coefficients of 1st polynomial");
    for(int i=0;i<n;i++)
      scanf("%d",&p1[i]);
    printf("Enter degree of 2nd polynomial");
    scanf("%d",&m);
    m=m+1;
    int p2[m];
    printf("Enter coefficients of 2nd polynomial");
    for(int i=0;i<m;i++)
      scanf("%d",&p2[i]);
      int k=n+m-1;
    int p3[k];//={0,0};
    for(int i=0;i<k;i++)
       p3[i]=0;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        p3[i+j]+=p1[i]*p2[j];//p3[i+j]=p3[i+j]+p1[i]*p2[j];
      }
    }
    
    printf("Resultant polynomial:\n");
    for(int i=0;i<k;i++)
      printf("%d x^%d* ",p3[i],i);
    

    return 0;
}