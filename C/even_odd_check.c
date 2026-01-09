#include <stdio.h>
int main() {
	int num = 3;
	if (num < 0) printf("Entered number less than 0");
	else if (num%2 == 0){
		printf("Its even");
	}
	else{
		printf("Its odd");
	}
	return 0;
}