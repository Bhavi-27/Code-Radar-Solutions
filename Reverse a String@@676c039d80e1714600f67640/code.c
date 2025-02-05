#include <stdio.h>
#include <string.h>
int main(){
    char st[20];
    gets(st);
    strev(st);
    printf("%s",st);
    return 0;
}