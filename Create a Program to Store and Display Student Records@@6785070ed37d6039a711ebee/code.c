#include <stdio.h>
struct Student{
    int rollno, marks;
    char name[30];
}obj1;
int main() {
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    scanf("\n%d",&obj1.rollno);
    scanf("%s",&obj1.name);
    scanf("%d",&obj1.marks);
    printf("Roll Number: %d, Name: %s,Marks: %d",obj1.rollno,obj.name,obj1.marks);
    }
    return 0;
}