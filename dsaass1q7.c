/*In a one dimensional array find out all the elements, which is the summation of
its immediate previous contiguous elements
#include <stdio.h>
int main()
{
    int arr[12];
    int sum=0;
    int n=12;
    printf("Enter 12 integers: ");
    // taking input and storing it in an array
    for(int i = 0; i < 12; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("sum is:");
    for(int i=0;i<n-1;i++){
        sum=arr[i];
        for(int j=i;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                if(sum==arr[j+1]){
                    printf("%d",arr[j+1]);
                    i=j+1;
                }
                else{
                    sum=sum+arr[j+1];
                }
            }
            else{
                i=j;
                break;
            }
        }
    }
    return 0;
}*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in an array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements of array",n);
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }

    for(int i=1;i<n;i++){
        int j=i-1,sum=0;
        while(j>=0){
            sum+=arr[j];
            if(sum==arr[i]){
                printf("%d ",arr[i]);
            }
            if(sum>arr[i]){
                break;
            }
            j--;

        }

    }

} 