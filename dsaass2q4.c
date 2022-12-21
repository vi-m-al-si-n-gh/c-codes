/*C program to print lower triangular and upper triangular matrix
#include <stdio.h>

// Function to print lower triangular matrix
void upper (int a[3][3], int r, int c)
{
for(int i = 0; i < r; i++)
{
	for(int j = 0; j < c; j++)
	{
	if(i > j)
		printf(" ");
	else
	printf("%d" , a[i][j]);
	printf(" ");
	}
	printf("\n");
}
}
//Function to print upper triangular matrix
void lower (int a[3][3], int r, int c)
{
for(int i = 0; i < r; i++)
{
	for(int j = 0; j < c; j++)
	{
	if(i < j)
		printf("  ");
	else
	printf("%d" , a[i][j]);
	printf(" ");
	}
	printf("\n");
}
}
int main() {
	// code
int r = 3, c = 3;
int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

printf("\nUpper Triangular Matrix is :\n");
upper(a, r, c);
printf("\nLower Triangular Matrix is :\n");
lower(a, r, c);
	return 0;
}*/



#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                printf("%d",arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>0 && j>0 && i+j>=5){
                printf("%d",arr[i][j]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                printf("%d",arr[i][j]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<4 && j<4 && i+j<4){
                printf(" %d",arr[i][j]);
            }
        }
        printf("\n");
    }
        return 0;
    } 
