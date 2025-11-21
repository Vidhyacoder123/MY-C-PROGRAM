#include<stdio.h>
int swapbyvalue(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("%d%d\n",a,b);
}
int swapbyreference(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("%d%d\n",*a,*b);
}
int main(){
    int x,y;
    printf("enter two currency values:");
    scanf("%d%d",&x,&y);
    swapbyvalue(x,y);
    printf("after call by value:%d%d\n",x,y);
    swapbyreference(&x,&y);
    printf("after call by reference:%d%d\n",x,y);
    return 0;
    
}
