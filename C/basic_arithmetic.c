#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient = (b != 0) ? (float)a / b : 0;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    if (b != 0) {
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Quotient: Division by zero is undefined.\n");
    }

    return 0;
}