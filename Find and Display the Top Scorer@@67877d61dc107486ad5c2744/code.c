#include <stdio.h>
struct Student{
    int roll_no;
    char name[30];
    float marks;
};
int main(){
    int n,j;
    float max;
    scanf("%d",&n);
    struct Student the[n];
    for(int i=0;i<n;i++){
        scanf("%d",&the[i].roll_no);
        scanf("%s",&the[i].name);
        scanf("%f",&the[i].marks);
    }
    for(j=0;j<n;j++){
        if(the[j].marks>the[j+1].marks){
            max=j;
        }
        else{
            max=j+1;
        }
        }
        for(int k=0;k<n;k++){
            if(k==j){
                printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",the[k].roll_no,the[k].name,the[k].marks);
            }
            else{
                continue;
            }
        }
        return 0;
    }