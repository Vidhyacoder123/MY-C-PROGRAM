#include <stdio.h>
#include<stdlib.h>
int main() {
     int *arr=(int*)malloc(15*sizeof(int));
    for ( int i=0;i<5;i++) {
 
    printf("enter element :%d",i++);
    scanf("%d",&arr[i]);

printf("array elements:\n");
for( int i=0;i<5;i++)
printf("%d",arr[i]);
}
free(arr);
for(int i=0;i<5;i++){
printf("%d\n",arr[i]);
}
    return 0;
}
