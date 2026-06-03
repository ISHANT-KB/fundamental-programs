#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1)
        return 0;

    if (num == 0)
        printf("The number is zero\n");
    else if (num > 0)
        printf("The number is positive\n");
    else
        printf("The number is negative\n");

    return 0;
}
