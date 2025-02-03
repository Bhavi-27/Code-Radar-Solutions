#include <stdio.h>
struct Student{
    int rollno;
    char name[40];
    float marks;
};
int main(){
    struct Student ob;
    int i,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        scanf("%d",&ob.rollno);
        scanf("%s",&ob.name);
        scanf("%f",&ob.marks);
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",ob.rollno, ob.name, ob.marks);
    }
    return 0;
}