#include <stdio.h>
int main(){
    int n,i,j,k,sp=0,num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;++j){
            printf(" ");
            ++sp;
        }
        for(k=1;k<=(i*2);k++){
            printf("%d",num++);
        }
        num=1;
    }
    return 0;
}