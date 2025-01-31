#include <stdio.h>
int main(){
    int a,b,ans;
    scanf("%d",&a);
    scanf("%d",&b);
    ans=a ^ (1<<b);
    printf("%d",ans);
    return 0;
}