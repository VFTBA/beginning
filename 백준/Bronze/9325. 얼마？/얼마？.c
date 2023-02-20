#include <stdio.h>
int main() {
	int test;
	int s;
	int n;
	int q;
	int p;
	int total = 0;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d", &s);
		total = total + s;
		scanf("%d", &n);

		for (int j = 0; j < n; j++) {
			scanf("%d %d", &q, &p);
			total = total + p * q;
		}
		printf("%d\n", total);
		total = 0;
	}

}