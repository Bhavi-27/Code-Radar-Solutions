#include <stdio.h>
int main(){
    int num, pos, ans;
    scanf("%d",&num);
    scanf("%d",&pos);
    num & ~ (1<<pos);
    printf("%d",&num);
    return 0;
}