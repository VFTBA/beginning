#include <stdio.h>
int main() {
	int a, b, c = 0;
	while ((scanf("%d %d", &a, &b) != -1)) {
		
		c = a + b;
		printf("%d\n", c);
	}
}