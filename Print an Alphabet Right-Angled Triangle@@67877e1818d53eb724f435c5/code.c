#include <stdio.h>
int main(){
    int i,j,num,alphabet=64;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            printf("%c ",alphabet+j);
        }
        printf("\n");
    }
    return 0;
}