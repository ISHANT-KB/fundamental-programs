#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2)
        return 0;

    if (b == 0)
    {
        printf("Cannot divide by zero\n");
        return 0;
    }

    if (a % b == 0)
        printf("%d is divisible by %d\n", a, b);
    else
        printf("%d is not divisible by %d\n", a, b);

    return 0;
}
