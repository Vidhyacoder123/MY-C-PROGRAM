#include <stdio.h>
#include<string.h>
#define MAX 100
void main() {
    char discription[MAX];
    char keyword[100];
    int len;
    printf("enter the cours discription:\n ");
    scanf("%s",discription);
len=strlen(discription);
printf("enter the keyword to search:\n ");
    scanf("%s",keyword);
    if(strstr(discription,keyword))
    printf("%s%s\n",keyword,discription);
   
}
