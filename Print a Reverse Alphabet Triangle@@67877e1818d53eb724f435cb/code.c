#include <stdio.h>
int main(){
    int i,j,num,alphabet=64,a=1;
    scanf("%d",&num);
    for(i=num;i>0;i--){
        for(j=i;j>0;j--){
            printf("%c ",alphabet+a);
            a++;
        }
        printf("\n");
    }
    return 0;
}