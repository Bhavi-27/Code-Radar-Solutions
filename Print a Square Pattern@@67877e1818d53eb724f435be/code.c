#include <stdio.h>
int main(){
    int i,j,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=num;j++){
            printf("*");
        }
        printf("");
    }
    return 0;
}