#include <stdio.h>
int main(){
    int n,i,j,k,sp=0,num=1;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(j=1;j<n-i;++j){
            printf(" ");
            ++sp;
        }
        for(k=1;k<=(i*2)-1;k++){
            printf("%d",num++);
        }
        num=1;
    }
    return 0;
}