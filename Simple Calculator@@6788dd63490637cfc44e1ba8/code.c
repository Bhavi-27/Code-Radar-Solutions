#include <stdio.h>
int main(){
    int num1,num2;
    float ans;
    char ch;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%c",&ch);
    if(ch=='+'){
        ans=num1+num2;
        printf("%.1f",ans);
    }
    else if(ch=='-'){
        ans=num1-num2;
        printf("%.1f",ans);    }
    else if(ch=='*'){
        ans=num1*num2;
        printf("%.1f",ans);
    }
    else if(ch=='/'){
        ans=num1/num2;
        printf("%.1f",ans);
    }
    else{
        printf("error");
    }
    return 0;
}