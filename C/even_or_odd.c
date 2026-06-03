#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) return 0;

    if (num % 2 == 0) printf("Its even\n");
    else printf("Its odd\n");

    return 0;
}

