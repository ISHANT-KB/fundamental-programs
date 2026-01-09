#include <stdio.h>
int main() {
	int num = 3;
	if (num < 0) printf("Entered number less than 0");
	else if (num%2 == 0){
		printf("Its not prime");
	}
	else{
		printf("Its prime");
	}
	return 0;
}