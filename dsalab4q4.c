#include <stdio.h>
#include <stdlib.h>

void insertpos(int n,int *arr,int pos,int num){
    arr=realloc(arr,n+1*sizeof(int));
    for(int i=0;i<pos-1;i++){
        arr[i]=arr[i+1];
    }
}

int main(){
    int n,m;
    // printf("Enter condition for switch statement : ");
    // scanf("%d",&m);
    printf("Enter the size of the  array : ");
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    printf("Enter  the elements of an array : ");
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    int pos,num;
    printf("Enter the index and the element you want to insert : ");
    scanf("%d %d",&pos,&num);
    for(int i=0;i<pos;i++){
        insertpos(n,p,pos,num);
        n++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(p-i));
    }
    return 0;
} 