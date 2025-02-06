#include <stdio.h>
#include <string.h>
int main(){
    char s[30];
    gets(s);
    printf("%s",strrev(s));
    return 0;
}