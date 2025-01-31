#include <stdio.h>
int main(){
    int num, pos, ans;
    scanf("%d",&num);
    scanf("%d",&pos);
    if((num>>pos)&1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}