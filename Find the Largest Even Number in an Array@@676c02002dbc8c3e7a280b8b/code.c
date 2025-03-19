#include <stdio.h>
int main(){
    int arr[100],n,i,even,max,arr1[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<k;i++){
        if(arr[i]%2==0){
            if(arr[i]>max){
                max=arr[i];
            }
        }
    }
    printf("%d",max);
    return 0;
}