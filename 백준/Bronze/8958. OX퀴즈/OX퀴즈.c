#include <stdio.h>
#include <string.h>
int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		char a[80];
		int total = 0;
		int score = 1;
		scanf("%s", &a);

		for (int j = 0; j < strlen(a); j++) {
			if (a[j] == 'O') {
				total += score;
				score++;
			}

			if (a[j] == 'X') {
				score = 1;
			}
		}

		printf("%d\n", total);

	}

	
}