// C++ program to remove a given element from an array
#include<stdio.h>
#include<stdlib.h>
// This function removes an element x from arr[] and
// returns new size after removal (size is reduced only
// when x is present in arr[]
int deleteElement(int arr*, int n, int x)
{
// Search x in array
arr=realloc(arr,n+1*sizeof(int));
int i;
for (i=0; i<n; i++)
	if (arr[i] == x)
		break;

// If x found in array
if (i < n)
{
	// reduce size of array and move all
	// elements on space ahead
	n = n - 1;
	for (int j=i; j<n; j++)
		arr[j] = arr[j+1];
}

return n;
}

/* Driver program to test above function */
int main()
{
	int n,x;
    printf("Enter the size of the  array : ");
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    printf("Enter  the elements of an array : ");
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("delete position:");
    scanf("%d",&x);
	// Delete x from arr[]
	n = deleteElement(p, n, x);

	printf("Enter  the elements of an array : ");
    for(int i=0;i<n;i++){
        printf("%d",(p+i));
    }
    
	return 0;
}
