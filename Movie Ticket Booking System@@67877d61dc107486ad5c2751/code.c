#include <stdio.h>
struct MovieTicket{
    char movie_name,ticket_type;
    int ticket_price;
}obj2;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&obj2.movie_name);
        scanf("%s",&obj2.ticket_type);
        scanf("%d",&ticket_price);
    }
    for(i=0;i<n;i++){
        printf("%s: %d",obj2.ticket_type);
    }
    return 0;
}