#include <stdio.h>
#include <string.h>
int main(){
    char s[30];
    int a;
    gets(s);
    a=strlen(s);
    printf("%s",a);
    return 0;
}