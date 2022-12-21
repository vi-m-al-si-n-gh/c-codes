/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **a,r,c,i,j;
	scanf("%d",&r);
	scanf("%d",&c);

	a=(int**)malloc(r*sizeof(int*));
	for(i=0;i<r;i++)
		*(a+i)=(int*)malloc(c*sizeof(int));
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
				{
					scanf("%d",*(a+i)+j);
				}
		}

	i=0;int sum1=0;
	for(j=0;j<c;j++)
		sum1=sum1+*(*(a+i)+j);

	i=r-1;int sum2=0;
	if(i!=0)
		{
				for(j=0;j<c;j++)
					sum2=sum2+*(*(a+i)+j);
		}

	j=0; int sum3=0;
	for(i=1;i<r-1;i++)
		sum3=sum3+*(*(a+i)+j);

	j=c-1; int sum4=0;
	for(i=1;i<r-1;i++)
		sum4=sum4+*(*(a+i)+j);

	printf("Sum of boundary is %d",sum1+sum2+sum3+sum4);
	return 0;
}

#include <stdio.h>

void Rotate(int arr[], int d, int n)
{
	// Storing rotated version of array
	int temp[n];
	printf("enter d:");
	scanf("%d",&d);
	// Keepig track of the current index of temp[]
	int k = 0;
	// Storing the n - d elements of array arr[] to the front of temp[]
	for (int i = d; i < n; i++) {
		temp[k] = arr[i];
		k++;
	}
	// Storing the first d elements of array arr[] into temp
	for (int i = 0; i < d; i++) {
		temp[k] = arr[i];
		k++;
	}
	// Copying the elements of temp[] in arr[] to get the final rotated array
	for (int i = 0; i < n; i++) {
		arr[i] = temp[i];
	}
}
// Function to print elements of array
void PrintTheArray(int arr[], int n)
{
	printf("enter n:");
	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		printf("%d ",arr[i]);
	}
}
// Driver code
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int d;

	// Function calling
	Rotate(arr, d, N);
	PrintTheArray(arr, N);

	return 0;
}*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in an array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a,b,c;
    printf("Enter thr range and shifting value");
    scanf("%d %d %d",&a,&b,&c);
    int newarr[n];
    for(int i=0;i<n;i++){
        if(i<a || i>b){
            newarr[i]=arr[i];
        }
        else{
            int x=i+c;
            if(x>b){
                x=x-b+a-1;
            }
            newarr[x]=arr[i];


        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",newarr[i]);
    }



    return 0;
}