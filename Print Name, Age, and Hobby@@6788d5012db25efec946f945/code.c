#include <stdio.h>
void main(){
    char name[30], hobby[30];
    int age;
    scanf("%c",&name);
    scanf("%d",&age);
    scanf("%d",&hobby);
    printf("Name: %s",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s",hobby);
    return 0;
}