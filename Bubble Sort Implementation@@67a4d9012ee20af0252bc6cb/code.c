#include <stdio.h>
int bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
printArray(int arr[],int n){
    for(int k=0;k<n;k++){
        printf("%d",&arr[k]);
    }
    return arr[];
}
