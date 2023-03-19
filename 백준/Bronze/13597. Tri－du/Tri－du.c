#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	if ((a >= 1 && a <= 13) && (b >= 1 && b <= 13)) {
		if (a >= b) {
			printf("%d", a);
		}

		else {
			printf("%d", b);
		}
	}
}