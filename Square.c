#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += i * i;   
    }

    printf("Sum of squares = %d", sum);

    return 0;
}
