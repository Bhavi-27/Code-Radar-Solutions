#include <stdio.h>
int main(){
    int n,arr[100],i,j,odd=0,even=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            odd++;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}