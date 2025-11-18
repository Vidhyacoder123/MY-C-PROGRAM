#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, guess;
    num = rand() % 100 + 1;  

    printf("Guess the number (1-100): ");

    while (1) {
        scanf("%d", &guess);

        if (guess == num) {
            printf("Correct! You guessed it.\n");
            break;
        }
        else if (guess > num) {
            printf("Too high! Try again: ");
        }
        else {
            printf("Too low! Try again: ");
        }
    }

    return 0;
}
