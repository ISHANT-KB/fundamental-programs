#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) return 0;

    int sign = (n < 0) ? -1 : 1;
    long long x = llabs(n);

    long long rev = 0;
    while (x > 0) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }

    printf("Reversed number: %lld\n", (long long)sign * rev);
    return 0;
}

