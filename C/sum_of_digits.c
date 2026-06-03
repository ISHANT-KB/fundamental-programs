#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) return 0;

    long long x = llabs(n);
    long long sum = 0;

    if (x == 0) {
        sum = 0;
    } else {
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
    }

    printf("Sum of digits: %lld\n", sum);
    return 0;
}

