#include <stdio.h>

int main()
{
    int n, flag=0,i=2;
    printf("enetr the integer number \n");
    scanf("%d",&n);
    while(i<n/2)
    {
        if(n%i==0)
    
    flag=1;
    break;
    }
    if(flag==0)
    printf("it is a prime\n");
    else
    printf("not prime\n");
    return 0;
}
