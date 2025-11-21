#include <stdio.h>
#include<stdlib.h>
int main() {
    int *p=(int*) malloc(sizeof(int));
    *p=10;
   free(p);
    printf("value =%d\n",*p);
    return 0;
}
