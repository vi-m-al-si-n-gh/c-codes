// Write a program to add two distances
#include <stdio.h>

struct Distance {
   int KM;
   float MTR;
} d1, d2, result;

void display(struct Distance d);

int main() {
   printf("Enter 1st distance\n");
   printf("Enter KM: ");
   scanf("%d", &d1.KM);
   printf("Enter MTR: ");
   scanf("%f", &d1.MTR);

   printf("\nEnter 2nd distance\n");
   printf("Enter KM: ");
   scanf("%d", &d2.KM);
   printf("Enter MTR: ");
   scanf("%f", &d2.MTR);
   
   result.KM = d1.KM + d2.KM;
   result.MTR = d1.MTR + d2.MTR;

   while (result.MTR >= 1000.0) {
      result.MTR = result.MTR - 1000.0;
      ++result.KM;
   }
   display(d1);
   return 0;
}
void display(struct Distance d)
   {
    printf("\nSum of distances = %dkm AND %.0fm", result.KM, result.MTR);
   }