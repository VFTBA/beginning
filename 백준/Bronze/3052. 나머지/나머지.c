#include <stdio.h>
int main() {
	int a[10];
	int b = 42;
	int c = 0;
	
	for (int i = 0; i < 10; i++) {
		scanf("%d\n", &a[i]);
		a[i] = a[i] % b;
	}

	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = i+1; j < 10; j++) {
			if (a[i] == a[j]) {
				count = count + 1;
			}
		}

		if (count == 0) {
			c = c + 1;
		}
	}

	
	printf("%d", c);
	

}