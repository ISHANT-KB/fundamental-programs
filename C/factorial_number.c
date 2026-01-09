#include <stdio.h>

int main() {
    int num;
    long long fact = 1;

    printf("Enter a number to find factorial: ");
    scanf("%d", &num);
if (num > 20) {
        printf("Factorial result may overflow for numbers greater than 20.\n");
        return 1;
    }
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d is %lld\n", num, fact);
    }

    return 0;
}
