#include <stdio.h>
int main() {
	int n, x;
	int array[10000];
	scanf("%d %d", &n, &x);

	if (n >= 1 && x <= 10000) {
		for (int i = 1; i <= n; i++) {
			scanf("%d", &array[i]);
            if (array[i] < x) {
                printf("%d ", array[i]);
            }
		
		}

	
		
	}
  
}