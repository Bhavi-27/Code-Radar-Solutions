#include <stdio.h>
void main(){
    char name[30], hobby[30];
    int age;
    fgets("%c",&name);
    scanf("%d",&age);
    fgets("%d",&hobby);
    printf("Name: %s",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s",hobby);
    return 0;
}