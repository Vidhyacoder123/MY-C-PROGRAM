#include <stdio.h>
#include<stdlib.h>
int main() {
    int *vid=(int*)calloc(1,sizeof(int));

    printf("%d",*vid);
   *vid=10;
   printf("%d",*vid);
    return 0;
}
