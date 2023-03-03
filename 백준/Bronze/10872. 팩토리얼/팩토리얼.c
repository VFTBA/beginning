#include <stdio.h>
int main() {
	int n;
	int factorial = 1;
	scanf("%d", &n);

	if (n >= 0 && n <= 12) {
		for (int i = 1; i <= n; i++) {
			factorial = factorial * i;
		}

		if (n == 0) {
			factorial;
		}

		printf("%d\n", factorial);
	}
}

	