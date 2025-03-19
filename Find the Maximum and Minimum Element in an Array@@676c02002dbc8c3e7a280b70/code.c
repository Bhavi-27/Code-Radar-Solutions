#include <stdio.h>
int main(){
    int n,i arr[100],j,max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    max=arr[1];
    min=arr[1];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                min=arr[i];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                max=arr[i];
            }
        }
    }
    printf("%d %d",min,max);
    return 0;
}