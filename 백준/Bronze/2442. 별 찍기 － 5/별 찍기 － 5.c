#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);

	if (n >= 1 && n <= 100) {
		for (int i = 1; i <= n; i++) {
			for (int j = n - i; j > 0; j--) {
				printf(" ");
			}

			for (int k = 0; k < 2*i - 1; k++) {
				printf("*");
			}

			printf("\n");
		}
	}

	return 0;
}