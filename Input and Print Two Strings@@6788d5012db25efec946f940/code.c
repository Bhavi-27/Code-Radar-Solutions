#include <stdio.h>
#include <string.h>
void main(){
    char str1[15],str2[15];
    gets("%s",&str1);
    gets("%s",&str2);
    printf("%s and %s",str1,str2);
    return 0;
}