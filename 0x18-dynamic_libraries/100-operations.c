#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int my_div(int a, int b) {
	if (b == 0) {
		printf("Error: Division by zero.\n");
		exit(1);
	}
	return a / b;
}

int mod(int a, int b) {
	if (b == 0) {
		printf("Error: Modulo by zero.\n");
		exit(1);
	}
	return a % b;
}

