#include <stdio.h>
int main(){
    int i,j,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=num;j>0;j--){
            printf("%d",i++);
        }
        printf("\n");
    }
    return 0;
}