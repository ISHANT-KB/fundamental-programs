#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) return 0;

    long long x = llabs(n);
    long long prod = 1;

    if (x == 0) prod = 0;
    else {
        while (x > 0) {
            prod *= (x % 10);
            x /= 10;
        }
    }

    printf("Product of digits: %lld\n", prod);
    return 0;
}

