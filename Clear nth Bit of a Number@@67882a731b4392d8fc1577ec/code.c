#include <stdio.h>
int main(){
    int num, pos, ans;
    scanf("%d",&num);
    scanf("%d",&pos);
    ans=num & ~ (1<<pos);
    printf("%d",ans);
    return 0;
}