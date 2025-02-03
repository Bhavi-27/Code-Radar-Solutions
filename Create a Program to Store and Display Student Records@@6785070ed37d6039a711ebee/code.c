#include <stdio.h>
struct Student{
    int rollno;
    float marks;
    char name[30];
};
int main() {
    struct Student k;
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    scanf("\n%d",&k.rollno);
    scanf("%s",&k.name);
    scanf("%f",&k.marks);
    printf("\nRoll Number: %d, Name: %s, Marks: %.2f",k.rollno,k.name,k.marks);
    }
    return 0;
}