#include <stdio.h>
int main(){
    int n,arr[100],i,j,target,num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(arr[i]!=target){
            printf("-1");
        }
        else{
            for(j=0;j<n;j++){
                if(arr[j]==target){
                    num=j;
                }
            }
        }
    }
    printf("%d",num);
    return 0;
}