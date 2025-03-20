#include <stdio.h>
int main(){
    int n,arr[100],i,j,count=0,arra[100];
    scnaf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arra[i]=0){
            continue;
        }
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arra[j]=1;
            }
        }
        printf("%d %d\n",arr[i],count);
    }
    return 0;
}