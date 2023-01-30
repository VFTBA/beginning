#include <stdio.h>
int main() {
	int n;
    int sum = 0;
	char numbers[100];
	scanf("%d", &n);
	if (n >= 1 && n <= 100) {
		scanf("%s", &numbers);
		for (int i = 0; i < n; i++) {
			sum += numbers[i] - '0';
		}
	}

	printf("%d", sum);
	
}