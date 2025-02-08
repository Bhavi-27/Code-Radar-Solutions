#include <stdio.h>
int main(){
    char str1[25], str2[25];
    scanf("%s",&str1);
    gets("%s",&str2);
    printf("%s",str1+str2);
    return 0;
}