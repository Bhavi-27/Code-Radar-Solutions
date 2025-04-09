#include <stdio.h>
#include <string.h>
int main(){
    char st[100];
    int length;
    length=strlen(st);
    for(int i=length;i>0;i--){
        printf("%s",st[i]);
    }
    return 0;
}