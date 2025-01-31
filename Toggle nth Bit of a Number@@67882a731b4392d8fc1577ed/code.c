#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    a ^ (1<<b);
    printf("%d",a);
    return 0;
}