#include <stdio.h>
int main (){
    int i,num;
    scanf("%d",&num);
    for(i=0;i<=num;i++){
        for (j=num;j>0;j--){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}