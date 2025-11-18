#include <stdio.h>

int main()
{
    int i,n,f1=0,f2=1,f3;
    printf("enter the integer number/n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f3=f1+f2;
        printf("%d\t",f1);
        f1=f2;
        f2=f3;
    }
    return 0;
}
