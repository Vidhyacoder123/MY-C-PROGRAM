#include <stdio.h>
int main(){
int a=10,b=20,*p1,*p2,temp;
p1=&a;
p2=&b;
printf("%d %d\n",a,b);
temp=*p1;
*p1=*p2;
*p2=temp;
printf("%d %d\n",a,b);

}
