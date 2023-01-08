#include <stdio.h>
int main() {
	int t;
	int a, b, c = 0;
	scanf("%d", &t);

	for (int i = 1; i <=  t; i++) {
		scanf("%d %d", &a, &b);
		c = a + b;
		printf("Case #%d: %d + %d = %d\n", i, a, b, c);
	}
}