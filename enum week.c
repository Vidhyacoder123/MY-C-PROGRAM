#include <stdio.h>
enum week {
   sunday,//0
   monday,//1
   tuesday,//2
};
int main(){
    enum week today;
    today=sunday;
    printf("%d",today);
}
