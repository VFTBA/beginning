#include <stdio.h>
int main() {
	
	int a, b, c = 0;

	while (1) {
		scanf("%d %d", &a, &b);
		c = a + b;

		if (a == 0 && b == 0) {
			break;
		}
		printf("%d\n", c);

		
	}
}