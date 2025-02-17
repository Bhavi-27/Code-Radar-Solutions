#include <stdio.h>
int main(){
    int num,i,n=0;
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime");
    }
    for(i=2;i<num;i++){
        if(i%num==0)
            n++;
    }
    if(n>0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}