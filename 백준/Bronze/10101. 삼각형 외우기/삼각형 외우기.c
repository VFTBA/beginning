#include <stdio.h>
int main() {
	int a, b, c;
	int d = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	d = a + b + c;

	if (a == 60 && b == 60 && c == 60 && d == 180) {
		printf("Equilateral");
	}

	else if ((a == b || b == c || a == c) && d == 180) {
		printf("Isosceles");
	}

	else if ((a != b && b != c && a != c) && d == 180) {
		printf("Scalene");
	}

	else if (d != 180) {
		printf("Error");
	}
}