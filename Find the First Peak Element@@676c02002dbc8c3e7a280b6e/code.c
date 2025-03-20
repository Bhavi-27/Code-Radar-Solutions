#include <stdio.h>
int main(){
    int arr[100]i,n,num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i-1]<arr[i]>arr[i+1]){
            num=arr[i];
        }
    }
    printf("%d",num);
    return 0;
}