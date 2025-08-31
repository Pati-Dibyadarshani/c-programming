#include <stdio.h>

int main() {
	int num, i;
	unsigned long long fact = 1;
	printf("Enter an integer: ");
	scanf("%d", &num);
	if (num < 0) {
		printf("Factorial is not defined for negative numbers.\n");
	} else {
		for (i = 1; i <= num; ++i) {
			fact *= i;
		}
		printf("Factorial of %d = %llu\n", num, fact);
	}
	return 0;
}