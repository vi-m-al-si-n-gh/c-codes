#include <stdio.h>
#include <stdlib.h>
void insertbeg(int n,int *arr,int num){
    arr=realloc(arr,n+1*sizeof(int));
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=num;

}
void insertend(int n,int *arr,int num){
    arr=realloc(arr,n+1*sizeof(int));
    arr[n]=num;

}
void insertpos(int n,int *arr,int pos,int num){
    arr=realloc(arr,n+1*sizeof(int));
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=num;

}


int main(){
    int n,m;
    printf("Enter condition for switch statement : ");
    scanf("%d",&m);
    printf("Enter the size of the  array : ");
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    printf("Enter  the elements of an array : ");
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    switch(m){
        case 1:
        {
            int pos,num;
            printf("Enter the index and the element you want to insert : ");
            scanf("%d %d",&pos,&num);
            for(int i=0;i<pos;i++){
                insertpos(n,p,pos,num);
                n++;
            }
            for(int i=0;i<n;i++){
                printf("%d ",*(p+i));
            }
            break;
        }
        case 2:
        {
            int num2;
            printf("Enter the number that you wanna insert at the beginning ");
            scanf("%d",&num2);
            insertbeg(n,p,num2);
            n++;
            for(int i=0;i<n;i++){
                printf("%d ",*(p+i));
            }
            break;
        }
        case 3:
        {
            int num3;
            printf("Enter the number that you wanna insert at the end ");
            scanf("%d",&num3);
            insertend(n,p,num3);
            n++;
            for(int i=0;i<n;i++){
                printf("%d ",*(p+i));
            }
            break;
        }
        default:
        {
            printf("something went wrong");
            break;
        }
    }
    return 0;
}

/*#include<stdio.h>

int main()
{
    int a[][] = {{1,2},{3,4}};

    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            printf("%d ", a[i][j]);
    return 0;
}
There is compilation error in the declaration " int a[][] = {{1,2},{3,4}};". 
Except the first dimension, every other dimension must be specified.
int arr[] = {5, 6, 7, 8} //valid
int arr[][5] = {}; //valid
int arr[][] = {}; //invalid
int arr[][10][5] = {}; //valid
int arr[][][5] = {}; //invalid

int main()
{
    int i;
    int arr[5] = {1};
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}
b) In C/C++, if we initialize an array with fewer members, all remaining members are automatically initialized as 0.
For example, the following statement initializes an array of size 1000 with values as 0.
int arr[1000] = {0};*/