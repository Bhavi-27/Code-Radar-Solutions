#include <stdio.h>
int main(){
    int n,i,arr[100],j,max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}