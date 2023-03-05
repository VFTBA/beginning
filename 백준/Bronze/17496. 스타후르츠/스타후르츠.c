#include <stdio.h>
int main() {
	int n, t, c, p;
	scanf("%d %d %d %d", &n, &t, &c, &p);
	int total = 0;
	total = (n - 1) / t * c * p;
	printf("%d", total);
}
