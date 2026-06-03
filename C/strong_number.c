#include <stdio.h>

int factorial(int d) {
    int fact = 1;
    for (int i = 1; i <= d; i++) fact *= i;
    return fact;
}

int main() {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 0;

    if (n < 0) {
        printf("Not a strong number\n");
        return 0;
    }

    int temp = n;
    int sum = 0;

    while (temp > 0) {
        int d = temp % 10;
        sum += factorial(d);
        temp /= 10;
    }

    if (sum == n) printf("Strong number\n");
    else printf("Not a strong number\n");

    return 0;
}

