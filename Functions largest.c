#include <stdio.h>
int largest(int a,int b,int c){
    if(a>=b&&a>=c){
    printf("a is largest\n");
}
else if(b>=a&&b>=c){
    printf("b is largest\n");
    
}
else
    printf("cis largest\n");
}

int main() {
  largest(2,3,5);  
    
}    
