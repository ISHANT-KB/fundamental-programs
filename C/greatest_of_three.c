#include <stdio.h>
int main() {
	int a = 10, b = 20, c =30;
	int result;
    if (a >= b && a >= c) {
        result = a;
    } else if (b >= a && b >= c) {
        result = b;
    } else {
        result = c;
    }
    printf("greatest number is %d", result );
}