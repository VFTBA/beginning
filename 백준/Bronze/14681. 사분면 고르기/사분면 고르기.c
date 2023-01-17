#include <stdio.h>
int main() {
	int x, y;
	int n;
	scanf("%d\n%d", &x, &y);

	if (x <= 1000 && x >= -1000 && x != 0 && y <= 1000 && y >= -1000 && y != 0) {
		if (x >= 1 && x <= 1000 && y >= 1 && y <= 1000) {
			n = 1;
		}

		else if (x >= 1 && x <= 1000 && y < 0 && y >= -1000) {
			n = 4;
		}

		else if (x < 0 && x >= -1000 && y >= 1 && y <= 1000) {
			n = 2;
		}

		else if (x < 0 && x >= -1000 && y < 0 && y <= 1000) {
			n = 3;
		}

		printf("%d\n", n);
	}
}