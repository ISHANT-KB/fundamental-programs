// nth prime number finder without using functions

#include <stdio.h>

int main() {
    int n, count = 0, num = 2, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    while (count < n) {
        isPrime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            count++;
        }

        num++;
    }

    printf("The %dth prime number is %d\n", n, num - 1);
    return 0;
}
