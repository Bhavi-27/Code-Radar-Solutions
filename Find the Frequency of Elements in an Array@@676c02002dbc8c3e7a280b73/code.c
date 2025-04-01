#include <stdio.h>
int main(){
    int arr[100],free[100],i,j,n,count;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        free[i]=-1;
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                free[j]=0;
            }
        }
        if(count!=0){
            free[i]=count;
        }
    }
    for(i=0;i<n;i++){
        if(count!=0){
            printf("%d %d",arr[i],free[i]);
        }
    }
    return 0;
}