#include<stdio.h>
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int b1, b2;
    printf("enter b for a1,a2:");
    scanf("%d%d",&b1,&b2);
    printf("\nbefore swapping\n");
    printf("a1,a2 b:%d %d\n",b1,b2);
      swap(&b1,&b2);
    printf("\nafter swapping\n");
     printf("\nbefore swapping\n");
    printf("a1,a2 b:%d %d\n",b1,b2);
}
