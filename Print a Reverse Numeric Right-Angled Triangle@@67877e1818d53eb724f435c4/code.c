#include <stdio.h>
int main(){
    int i,j,num,n=1;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=i;j>=1;j--){
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}