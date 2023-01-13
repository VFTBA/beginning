#include <stdio.h>
int main() {
	int x;
	int n;
	int a, b;
	int total = 0;
	int realtotal = 0;

	scanf("%d", &x);
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		total += a * b;
		
	
		
	}

	
	
	if (total == x) {
		printf("Yes");
	}

	else if (total != x) {
		printf("No");
	}
	
}