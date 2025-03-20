#include <stdio.h>
int main(){
    int n,arr[100],i,j,count=1,arra[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arra[i]=0){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arra[j]=1;
            }
        }
        printf("%d %d\n",arr[i],count);
    }
    }
    return 0;
}