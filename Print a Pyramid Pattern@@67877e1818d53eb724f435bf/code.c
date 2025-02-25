#include <stdio.h>
int main(){
    int i,j,c,num,sp=0;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(c=1;c<=num-i;++c){
            printf(" ");
            ++sp;
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}