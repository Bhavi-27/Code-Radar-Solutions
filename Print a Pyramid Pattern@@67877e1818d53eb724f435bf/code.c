#include <stdio.h>
int main(){
    int i,j,c,num,sp=30;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(c=1;c<=sp;c++){
            printf(" ");
            sp=sp-2;
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}