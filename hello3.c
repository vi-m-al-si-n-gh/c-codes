//4a
#include <stdio.h>
int main()
{
     int a[3][5],i,j,d1=0,c=0;
     printf("Enter Elements for Matrix of Size 3*5:\n\n");
     for(j=0;j<=2;j++)
          for(i=0;i<=4;i++)
          {
               scanf("%d",&a[j][i]);
               if(j>i)
               d1+=a[i][j];
          }
     printf("\nMatrix of Size 3*5: \n\n");
     for(i=0;i<=2;i++)
     {
          for(j=0;j<=4;j++)
          {
               printf("%3d ",a[i][j]);
          }
          printf("\n");
     }
     for(j=0;j<=2;j++)
          for(i=0;i<=4;i++)
               if(a[j][i]==0)
                     c++;

     printf("Zeros present in Above Matrix: %d\n",c);
     printf("Sum of elements above the diagonal=%d\n",d1);
     return 0;
}
//4b