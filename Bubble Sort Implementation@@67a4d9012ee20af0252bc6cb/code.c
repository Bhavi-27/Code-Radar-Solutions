#include <stdio.h>
int bubbleSort(int arr[],int n){
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
printArray(int arr[],int n){
    for(i=0;i<n;i++){
        printf("%d",&arr[i]);
    }
}
