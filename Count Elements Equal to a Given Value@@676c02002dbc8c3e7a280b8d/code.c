#include <stdio.h>
int main(){
    int arr[100],k,n,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==k){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}