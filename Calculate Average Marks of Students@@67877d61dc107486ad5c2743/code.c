#include <stdio.h>
struct Student{
    int roll_no;
    char name[30];
    float marks;
}the[n];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&the[i].roll_no);
        scanf("%s",&the[i].name);
        scanf("%f",&the[i].marks);
    }
    for(int j=0;j<n;j++){
        int avg=0;
        avg= the[i].marks+avg;
    }
    return 0;
}