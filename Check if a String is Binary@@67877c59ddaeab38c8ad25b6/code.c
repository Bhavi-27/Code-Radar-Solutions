#include <stdio.h>
int main(){
    char str[100];
    int i;
    scanf("%s",&str);
    int j=0;
    while(str[j]!="\0"){
     j++;
    }
    for(i=0;i<j;i++){
        if(str[i]!="1" || str[i]!="0"){
            printf("No");
            break;
        }
        else{
            printf("Yes");
        }
    }
    return 0;
}