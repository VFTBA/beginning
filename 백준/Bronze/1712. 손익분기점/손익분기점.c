#include <stdio.h>
int main() {
	int a, b, c;
	int d = 0;
	scanf("%d %d %d", &a, &b, &c);
	d = a / (c - b) + 1;

	if (a <= 2100000000 && b <= 2100000000 && c <= 2100000000) {
		if (b >= c) {
			printf("-1");
		}

		else {
			printf("%d", d);
		}
	}
}