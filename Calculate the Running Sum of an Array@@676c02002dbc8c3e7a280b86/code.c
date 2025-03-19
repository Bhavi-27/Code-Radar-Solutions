#include <stdio.h>
int main(){
    int arr[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++){
        arr[i+1]=arr[i]+arr[i+1];
        printf("%d ",arr[i]);
    }
}