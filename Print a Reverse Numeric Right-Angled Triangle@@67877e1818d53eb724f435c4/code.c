#include <stdio.h>
int main(){
    int i,j,num;
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        for(j=i;j>=0;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}