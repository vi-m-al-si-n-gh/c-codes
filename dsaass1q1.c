// find largest and smallest number in an array
#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
  printf("Largest element = %.2lf \n", arr[0]);

   // storing the Smallest number to arr[1]
   for (int i = 1; i < n; ++i) {
    if (arr[1] > arr[i]) {
      arr[1] = arr[i];
    }
  }

  printf("Smallest element = %.2lf \n", arr[1]);

  return 0;
}
