/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i,j,temp;
	printf("Enter size of array:");
	scanf("%d",&n);

	a=malloc(sizeof(int)*n);

	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n/2;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}

		for(j=n/2;j<n-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After sorting first half in ascending and second half in descending order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
				
}*/

// WAP to arrange first half of the array in ascending order and second half of the
// array in descending order.
#include<stdio.h>
#include <stdlib.h>

void ascDecFunc(int a[], int n)
{
    int temp;
    for(int i=0;i < n-1;i++)
    {
        for(int j = 0;j < n/2; j++) { if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
        for(int j = n/2;j < n-1; j++)
        {
            if(a[j] < a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
	
	for(int i = 0; i < n; i++)
	    printf("%d ", a[i]);
}
 
int main()
{
    int arr[] = {3, 2, 4, 1, 10, 30, 40, 20};
    int len = sizeof(arr) / sizeof(arr[0]);
    ascDecFunc(arr, len);
 
    return 0;
}