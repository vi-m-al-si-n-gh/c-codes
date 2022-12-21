// C code for k largest elements in an array
#include <stdio.h>
#include <stdlib.h>

// Compare function for qsort
int cmpfunc(const void* a, const void* b)
{
	return (*(int*)b - *(int*)a);
}

void kLargest(int arr[], int n, int k)
{
	// Sort the given array arr in reverse order.
	qsort(arr, n, sizeof(int), cmpfunc);
	// Print the first kth largest elements
	for (int i = 0; i < k; i++)
		printf("%d ", arr[i]);
}
// driver program
int main()
{
	int arr[] = { 1, 23, 12, 9, 30, 2, 50 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	kLargest(arr, n, k);
}

// This code is contributed by Aditya Kumar (adityakumar129)
