#include <stdio.h>

int main() 
{
    int i,sum=0,n;
    printf("enetr the value of n\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
        printf("sum of first %d natural number is %d\n",n, sum);

    return 0;
}
