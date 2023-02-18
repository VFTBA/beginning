#include <stdio.h>
int main() {
	int N;
	int array[1000];
	int temp;

	scanf("%d", &N);

	if (N >= 1 && N <= 1000) {
		for (int i = 1; i <= N; i++) {
			scanf("%d", &array[i]);
		}

		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if (array[j] > array[i]) {
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
  
				}
			}
		}

		for (int k = 1; k <= N; k++) {
			printf("%d\n", array[k]);
		}
	}
}