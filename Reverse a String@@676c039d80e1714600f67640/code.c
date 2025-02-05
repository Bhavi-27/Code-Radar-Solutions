#include <stdio.h>
#include <string.h>
int main(){
    char st[20];
    gets(st);
    strrev(st);
    printf("%s",st);
    return 0;
}