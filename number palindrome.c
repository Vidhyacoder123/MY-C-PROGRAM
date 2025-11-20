#include <stdio.h>
int main() {
 int num=121,original,rem,rev=0;
 original=num;
 while(num!=0){
     rem=num%10;
     rev=rem*10+num;
     num=num/10;
 }
 if(original==rev){
    printf("it is a palindrome");
}
else{
    printf("it is not palindrome");
}
    return 0;
}
