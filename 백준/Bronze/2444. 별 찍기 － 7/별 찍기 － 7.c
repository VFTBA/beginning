#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);


	if (n >= 1 && n <= 100) {
		for (int i = 1; i <= n; i++) {
			for (int j = n - i; j > 0; j--) {
				printf(" ");
			}

			for (int k = 1; k <= 2 * i - 1; k++) {
				printf("*");
			}

			printf("\n");
		}

		for (int i = n - 1; i >= 0; i--) {
			for (int j = n - i; j > 0; j--) {
				printf(" ");
			}

			for (int k = 1; k <= 2 * i - 1; k++) {
				printf("*");
			}
			printf("\n");
		}
	}
}