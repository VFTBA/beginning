#include <stdio.h>
int main() {
	int a, b;
	int c;
	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	if ((a + b) >= (2*c)) {
		printf("%d", (a + b) - (2*c));
	}

	else if ((a + b) < (2*c)) {
		printf("%d", a + b);
	}
}