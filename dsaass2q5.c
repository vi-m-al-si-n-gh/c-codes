#include<stdio.h>
#include<limits.h>
int main(){
   int m, n, sum = 0;
   printf("\nEnter the order of the matrix : ");
   scanf("%d %d",&m,&n);
   int i, j;
   int mat[m][n];
   printf("\nInput the matrix elements\n");
   for(i = 0; i<m; i++){
      for(j = 0; j<n; j++)
      scanf("%d",&mat[i][j]);
   }
   printf("\nOuter element Matrix\n");
   for(i = 0; i<m; i++){
      for(j = 0; j<n; j++){
         if (i == 0 || j == 0 || i == n - 1 || j == n - 1){
            printf("%d ", mat[i][j]);
            sum = sum + mat[i][j];
         }
         else
         printf("  ");
      }
      printf("\n");
   }
   printf("\nSum of outer element is %d", sum);
}


/*#include<stdio.h>
int main(){
    int a[5][5],b=01;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            a[i][j]=b;
            b++;
        }
    }
    int indexrow,indexcol,s=0;
    printf("Enter the row and column for which sum of surrounding elements is to be found:");
    scanf("%d %d",&indexrow,&indexcol);
    for (int i=indexrow-1;i<=indexrow+1;i++){
        for (int j=indexcol-1;j<=indexcol+1;j++){
            s=s+a[i][j];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    s=s-a[indexrow][indexcol];
    printf("sum=:%d",s);
}*/