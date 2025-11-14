// DELOS SANTOS, BENJAMIN D. III DIT 1-2

#include <stdio.h>

int main() {
    int j = 10, b = 5, c = 0;
    int sum, difference, product;
    float quotient;

    // Arithmetic Operations
    printf("\nArithmetic Operations:\n");
    sum = j + b;
    difference = j - b;
    product = j * b;
    quotient = (float)j / b;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);     
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    // Logical Operations
    printf("\nLogical Operations:\n");

    printf("AND Operation\n");
    printf("(j > b) && (b < j): %d\n", (j > b) && (b < j));
    printf("(b > j) && (j < b): %d\n", (b > j) && (j < b));

    printf("\nOR Operation\n");
    printf("(j > b) || (b < j): %d\n", (j > b) || (b < j));
    printf("(j < b) || (b > j): %d\n", (j < b) || (b > j));

    printf("\nNOT Operation\n");
    printf("!(j == 10): %d\n", !(j == 10));
    printf("!(j == 15): %d\n", !(j == 15));

    // Assignment Operations
    printf("\nAssignment Operations:\n");
    printf("Initial c value = %d\n", c = b);
    printf("c += 5: %d\n", c += 5);
    printf("c -= 5: %d\n", c -= 5);
    printf("c *= 5: %d\n", c *= 5);
    printf("c /= 5: %d\n", c /= 5);
    printf("c %%= 5: %d\n", c %= 5);

    return 0;
}
