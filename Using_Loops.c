// DELOS SANTOS, BENJAMIN D. III DIT 1-2


#include <stdio.h>

int main() {
    int i;

    // While loop: prints numbers from 1 to 10
    i = 1;
    printf("While loop (1 to 10):\n");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    printf("\n\n");

    // For loop: prints even numbers from 2 to 20
    printf("For loop (even numbers 2 to 20):\n");
    for (i = 2; i <= 20; i += 2) {
        printf("%d ", i);
    }

    printf("\n\n");

    // Do-while loop: prints numbers from 1 to 5
    i = 1;
    printf("Do-while loop (1 to 5):\n");
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    printf("\n");

    return 0;
}
