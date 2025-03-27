#include <stdio.h>
int bubbleSort(int arr[],int n){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int printArray(int arr[],int n){
    for(l=0;l<n;l++){
        printf("%d",arr[l]);
    }
}
int main(){
    int n,i,j,k,l;
    scanf("%d",&n);
    int arr[100];
    for(int k=0; k<n; k++){
        scanf("%d",&arr[k]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}