#include <stdio.h>
void main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(c*c==a*a + b*b)
    {
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}