#include <stdio.h>
int bubbleSort(arr[],n){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
printArray(arr[],n){
    for(i=0;i<n;i++){
        printf("%d",&arr[i]);
    }
}
int main(){
    int n,i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    printArray(arr,n);
    return 0;
}