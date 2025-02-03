#include <stdio.h>
int main(){
    int i,j,num,alphabet=65;
    scanf("%d",&num);
    for(i=1;i<=num;num++){
        for(j=1;j<=i;j++){
            printf("%c ",alphabet+j);
        }
        printf("\n");
    }
    return 0;
}