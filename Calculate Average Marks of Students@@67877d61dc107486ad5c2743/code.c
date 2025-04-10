#include <stdio.h>
struct Student{
    int roll_no;
    char name[30];
    float marks;
};
int main(){
    int n;
    float avg,sum=0;
    scanf("%d",&n);
    struct Student the[n];
    for(int i=0;i<n;i++){
        scanf("%d",&the[i].roll_no);
        scanf("%s",&the[i].name);
        scanf("%f",&the[i].marks);
        sum+=the[i].marks;
    }
    avg=sum/n;
    printf("%f",avg);
    return 0;
}