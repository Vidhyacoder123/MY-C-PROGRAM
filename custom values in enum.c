#include <stdio.h>
enum level {
    low=1,
    medium=5,
    high=10,
};
int main(){
    enum level l=medium;
    printf("%d",l);
}
  
