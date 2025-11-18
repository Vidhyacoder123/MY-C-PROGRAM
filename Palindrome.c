#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    
    printf("Enter a number or string: ");
    scanf("%s", str);

    int len = strlen(str);
    int i, j;

    
    for(i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0'; 
    if(strcmp(str, rev) == 0) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
