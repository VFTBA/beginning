#include <stdio.h>
int main() {
	int n;
	int array[2000000];
	int min = 1000000;
	int max = -1000000;
	scanf("%d", &n);
	
	
	for (int i = 1; i <= n; i++) {
		scanf("%d", &array[i]);
		if (min > array[i]) {
			min = array[i];
		}
		
		if (max < array[i]) {
			max = array[i];
		}

		
	}

	
	printf("%d %d", min, max);
}	