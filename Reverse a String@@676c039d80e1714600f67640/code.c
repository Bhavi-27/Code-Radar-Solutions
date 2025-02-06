#include <stdio.h>
#include <string.h>
int main(){
    char s[30];
    fgets(s,30, stdin);
    strrev(s);
    printf("%s",&s);
    return 0;
}