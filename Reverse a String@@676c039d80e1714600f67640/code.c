#include <stdio.h>
#include <string.h>
int main(){
    char s[30];
    fgets(s,30, stdin);
    printf("%s",strrev(s));
    return 0;
}