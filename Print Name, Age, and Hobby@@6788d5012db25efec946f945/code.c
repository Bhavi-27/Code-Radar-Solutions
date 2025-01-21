#include <stdio.h>
void main(){
    char name[30], hobby[30];
    int age;
    scanf("%c",&name);
    scanf("%d",&age);
    scanf("%d",&hobby);
    fgets("Name: %s",name);
    printf("\nAge: %d",age);
    fgets("\nHobby: %s",hobby);
    return 0;
}