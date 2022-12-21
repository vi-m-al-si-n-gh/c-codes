// WAP program to do the following operations on matrix.
// a. Find the number of zero’s
// b. Find the sum of all elements above the main diagonal
// c. Display all the diagonal elements.
// d. Display the matrix in a row major order
// e. Display the matrix in a column major order.
#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);
    
    int z = 0, s = 0;
    int a[n][m];
    
    printf("Enter the matrix:\n");
    for(int i=0; i<n; i++) 
    {
        for(int j=0; j<m; j++) 
        {
            scanf("%d", &a[i][j]);
            if(j>i)
            {
                s+= a[i][j];
            }
            if(a[i][j]==0)
            {
                z++;
            }
        }
    }
    printf("Number of zeroes = %d\n", z);
    printf("Sum of elements above main diagonal = %d\n", s);
    printf("The diagonal elements are:\n");
    int min = n;
    if(m<min) min = m;
    for(int i=0; i<min; i++)
    {
        printf("%d ", a[i][i]);
    }
    printf("\nElements of matrix in row major form are:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nElements of matrix in column major form are:\n");
    for(int j=0; j<m; j++) 
    {
        for(int i=0; i<n; i++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}