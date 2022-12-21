// Simple C program to find k'th smallest and largest element
/*#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}
int cmpfunct(const void* a, const void* b)
{
	return (*(int*)a + *(int*)b);
}
int kthSmallest(int arr[], int n, int k)
{
	qsort(arr, n, sizeof(int), cmpfunc);

	return arr[k - 1];
}
int kthlargest(int arr[], int n, int k)
{
	qsort(arr, n, sizeof(int), cmpfunct);

	return arr[k + 1];
}
int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int n = sizeof(arr) / sizeof(arr[0]), k;
    printf("enter kth value:");
    scanf("%d",&k);
	printf("K'th smallest element is %d \n",kthSmallest(arr, n, k));
    printf("K'th largest element is %d \n",kthlargest(arr, n, k));
	return 0;
}*/
#include<stdio.h>
//function to find the kth largest or smallest
void findsmallandlarge(int arr[20], int n, int k, int ls)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
               t=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=t;
            }
        }
    }

    if (ls==1)
    {
       for(i=n-1;i>=n-k;i--);
       printf("\n The %dth largest element:%d",k,arr[i+1]);
    }
    else
    {
       for(i=0;i<k;i++);
       printf("\n The %dth smallest element:%d",k,arr[i-1]);
    }
}
int main()
{
    int i,n,arr[20],k,ls;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the kth number:");
    scanf("%d",&k);
    printf("enter 1 for largest and 0 for smallest:");
    scanf("%d",&ls);
    findsmallandlarge(arr,n,k,ls);
    return 0;
}