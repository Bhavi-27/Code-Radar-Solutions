#include <stdio.h>
struct MovieTicket{
    char movie_name[100],ticket_type[100];
    int ticket_price;
}obj2;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&obj2.movie_name);
        scanf("%s",&obj2.ticket_type);
        scanf("%d",&obj2.ticket_price);
        printf("%s: %d,",obj2.ticket_type,ticket_price);
    }
    return 0;
}