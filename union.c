#include <stdio.h>

int main() {
    union vidhya{
        int age;
        float mark;
    };
    union vidhya v;
    v.age=18;
      printf("%d",v.age);
     v.mark=20.7;
     printf("%f",v.mark);
    return 0;
}
