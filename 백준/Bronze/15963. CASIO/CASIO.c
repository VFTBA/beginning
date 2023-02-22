#include <stdio.h>
int main() {
	int n;
	int m;
	scanf("%d %d", &n, &m);

	if (m == n) {
		printf("1");
	}

	else if (m != n) {
		printf("0");
	}
}