#include <stdio.h>
int main(){
    char st[100];
    int length;
    length=sizeof(st)/sizeof(st[0]);
    for(int i=length;i>0;i--){
        printf("%s",st[i]);
    }
    return 0;
}