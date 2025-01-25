#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(2<=num<=100){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}