//insertion sorting
#include <stdio.h>
#include <stdbool.h>

#define MAX 7

int intArray[MAX] = {4,6,3,2,1,9,7};

void printline(int count) {
   int i;
	
   for(i = 0;i < count-1;i++) {
      printf("=");
   }
	
   printf("=\n");
}

void display() {
   int i;
   printf("[");
	
   // navigate through all items 
   for(i = 0;i < MAX;i++) {
      printf("%d ",intArray[i]);
   }
	
   printf("]\n");
}

void insertionSort() {

   int item;
   int j;
   int i;
  
   // loop through all numbers 
   for(i = 1; i < MAX; i++) { 
	
      // select a value to be inserted. 
      item = intArray[i];
		
      // select the hole position where number is to be inserted 
      j = i-1;
		
      // check if previous no. is larger than value to be inserted 
      while (j >= 0 && intArray[j] > item) {
         intArray[j+1] = intArray[j];
         j--;
         printf(" item moved : %d\n" , intArray[j]);
      }
      printf(" item inserted : %d, at position : %d\n" , item,j+1);
      intArray[j+1] = item;

      printf("Iteration %d:",i);
      display();
		
   }  
}

void main() {
   printf("Input Array: ");
   display();
   printline(50);
   insertionSort();
   printline(50);
   printf("Output Array: ");
   display();
}
