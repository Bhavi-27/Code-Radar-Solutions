#include <stdio.h>
int main(){
    int i,j,num,c=1;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            printf("%d ",c++);
        }
        printf("\n");
    }
    return 0;
}