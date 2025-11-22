#include <stdio.h>
int main() {
char first[50]="vidhya", last[50]="rt", full[100];
int i=0, j=0, length=0,maxlength=20;
while (first[i] !='\0'){
    full[length++]=first[i++];
}
full[length++]=' ';

  while (last[j] !='\0'){
    full[length++]=last[j++];
}
full[length]='\0';
printf("%s",full);
printf("%d",length);
if(length>20)
printf("too long for screen\n");
else
printf("fits the screen");

    return 0;
}
