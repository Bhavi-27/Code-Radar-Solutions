#include <stdio.h>
int main(){
    int n,arr[100],i,j,target;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(arr[i]==target){
            j=i;
        }
    }
    printf("%d",j);
    return 0;
}