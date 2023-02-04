#include <stdio.h>
int main() {
	int a;
	int b;
	int c;
	int d[10] = { 0, };
	int total;
	int remain;
	scanf("%d\n", &a);
	scanf("%d\n", &b);
	scanf("%d\n", &c);

	total = a * b * c;
	
	while (total > 0) {
		remain = total % 10;
		d[remain] ++;;
		total /= 10;
	
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d\n", d[i]);
	}
} 