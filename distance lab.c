#include <stdio.h>
#include<math.h>
int main() {
    float x1,y1,x2,y2,distance;
    printf("enter x1,y1and x2,y2\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%2f\n",distance);
}
