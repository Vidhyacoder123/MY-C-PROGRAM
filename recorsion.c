#include <stdio.h>
int sum(int n){
    if(n==0){
        return 1;
    }
    return n+sum(n-1);
}
int main(){
    int a=sum(5);
  printf("%d",a);
}

  
