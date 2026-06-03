#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) return 0;

    long long x = llabs(n);
    int count = 0;

    if (x == 0) {
        count = 1;
    } else {
        while (x > 0) {
            count++;
            x /= 10;
        }
    }

    printf("Count of digits: %d\n", count);
    return 0;
}

