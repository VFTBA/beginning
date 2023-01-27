#include <stdio.h>
int main() {
	int a, b;
	int c;
	int h, m;
	scanf("%d %d", &a, &b);
	scanf("%d", &c);
	int d = 0;
	d = b + c;
	if (d < 60) {
		printf("%d %d", a, d);
	}

	else if (d >= 60) {
		h = d / 60;
		m = d % 60;

		if (a + h < 24) {
			printf("%d %d", a + h, m);
		}

		else if (a + h >= 24) {
			printf("%d %d", a + h - 24, m);
		}
	}
}