#include <stdio.h>
int main(){
    int i,j,num;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        for(j=0;j<i;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}