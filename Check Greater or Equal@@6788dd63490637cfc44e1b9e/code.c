#include <stdio.h>
int main(){
    int num1, num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num1>num2){
        printf("Yes");
    }
    if(num2>num1){
        printf("No");
    }
    if(num1==num2){
        printf("Yes");
    }
    return 0;
}