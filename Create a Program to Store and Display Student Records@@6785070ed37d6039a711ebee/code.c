#include <stdio.h>
struct Student{
    int rollno;
    float marks;
    char name[30];
}obj1;
int main() {
    int a,i;
    scanf("%d",&a);
   
    scanf("\n%d",&obj1.rollno);
    scanf("%s",&obj1.name);
    scanf("%f",&obj1.marks);
    printf("\nRoll Number: %d, Name: %s,Marks: %.2f",obj1.rollno,obj.name,obj1.marks);
    
    return 0;
}