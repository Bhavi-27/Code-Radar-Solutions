#include <stdio.h>
int main(){
    float num1,num2,ans;
    char ch;
    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%c",&ch);
    if(ch=='+'){
        ans=num1+num2;
        printf("%d",ans);
    }
    else if(ch=='-'){
        ans=num1-num2;
        printf("%d",ans);    }
    else if(ch=='*'){
        ans=num1*num2;
        printf("%d",ans);
    }
    else if(ch=='/'){
        ans=num1/num2;
        printf("%d",ans);
    }
    else{
        printf("error");
    }
    return 0;
}