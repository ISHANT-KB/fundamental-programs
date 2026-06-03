#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) return 0;

    long long temp = llabs(n);

    int digits = 0;
    long long t = temp;
    if (t == 0) digits = 1;
    while (t > 0) {
        digits++;
        t /= 10;
    }

    long long sum = 0;
    t = temp;
    while (t > 0) {
        int d = (int)(t % 10);
        long long p = 1;
        for (int i = 0; i < digits; i++) p *= d;
        sum += p;
        t /= 10;
    }

    if (sum == temp) {
        printf("Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }

    return 0;
}

