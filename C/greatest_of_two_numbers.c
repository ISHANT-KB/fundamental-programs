#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) return 0;

    if (a >= b) printf("Greatest number is %d\n", a);
    else printf("Greatest number is %d\n", b);

    return 0;
}

