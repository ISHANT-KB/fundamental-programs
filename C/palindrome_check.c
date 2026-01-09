#include <stdio.h>
int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int originalNum = num;
    int reversedNum = 0;   
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num = num / 10;
    }
    if (originalNum == reversedNum) {
        printf("%d is a Palindrome\n", originalNum);
    } else {
        printf("%d is Not a Palindrome\n", originalNum);
    }
    

    return 0;
}