#include <stdio.h> 
int main() {
	int n;
	scanf("%d", &n);

	if (n >= 1 && n <= 100) {
		for (int i = n; i >= 0; i--) {
			for (int j = 1; j <= n - i; j++) {
				printf(" ");
			}

			for (int k = 1; k <= i; k++) {
				printf("*");
			}


			printf("\n");
		}
	}
}