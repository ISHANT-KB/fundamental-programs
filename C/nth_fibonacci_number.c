#include <stdio.h>

int main() {
    int n;
    long long a = 0, b = 1, c;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
    } 
    else if (n == 1) {
        printf("The %dth Fibonacci number is %lld\n", n, a);
    } 
    else if (n == 2) {
        printf("The %dth Fibonacci number is %lld\n", n, b);
    } 
    else {
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("The %dth Fibonacci number is %lld\n", n, b);
    }

    return 0;
}
