#include <stdio.h>
int main(){
    int i,j,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=num;j>=1;j--){
            printf("%d",num++);
        }
        printf("\n");
    }
    return 0;
}