#include <stdio.h>

int main() {
    int N;

    printf("Enter a number: ");
    scanf("%d", &N);

    while (N >= 1) {
        printf("%d ", N);
        N--;
    }

    return 0;
}
