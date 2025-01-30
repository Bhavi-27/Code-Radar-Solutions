#include <stdio.h>
int main(){
    int num1,num2,ans;
    char ch;
    scanf("%d",&num1);
    scanf("%d",&num2);
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