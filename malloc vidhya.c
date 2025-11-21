#include <stdio.h>
#include<stdlib.h>
int main() {
int *vidhya=(int*)malloc(5*sizeof(int));
*vidhya=10;{
    printf("%d",*vidhya);
}
    return 0;
}
