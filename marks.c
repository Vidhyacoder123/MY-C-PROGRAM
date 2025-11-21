#include <stdio.h>
int main() {
int marks;
printf("enter the students marks");
scanf("%d",&marks);
if(marks>=90){
    printf("grade A");}
    else if(marks>=75)
    printf("grade B\n");
    else if(marks>=60)
    printf("grade C\n");
    else if(marks>=50)
    printf("grade D\n");
    else
    printf("grade F\n");
}

   
