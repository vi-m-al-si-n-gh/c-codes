/* program to delete the duplicate elements from sorted array using pointers in C. */  
#include <stdio.h>  
#include <stdlib.h>  
 
int i, j;  
int remove_element ( int *ptr, int num)  
{  
int temp; 
for ( i = 0; i < num-1; i++)  
{  
    for (j = i + 1; j < num; j++)  
    {  
        if ( *(ptr+i) == *(ptr+j))  
        {  
            temp = *(ptr + j);  
            *(ptr + j) = *(ptr + num - 1);  
            *(ptr + num - 1) = temp;  
            num--;  
        }  
    }  
}  
    printf (" After removing the duplicate elements: ");  
    for ( i = 0; i < num; i++)  
    {  
        printf (" %d \t", *(ptr+i));  
    }  
    return 0;  
}
int main ()  
{  
    int num, *ptr;  
    printf (" Define the size of the array element: ");  
    scanf (" %d", &num);
    ptr = (int *) malloc (num * sizeof(int));  
    printf ("\n Enter the elements of the array:");    
    for ( i = 0; i < num; i++)  
    {  
        scanf (" %d", (ptr+i));  
    } 
    remove_element (ptr, num);  
    return 0;  
}  