#include <stdio.h>
int main() {
	int n;
	int k;
	int x[1000];
	int cutoffpoint;
	int temp;

	scanf("%d %d", &n, &k);

	
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (x[j] > x[i]) {
				temp = x[j];
				x[j] = x[i];
				x[i] = temp;


			}
		}
	}

	for (int i = 0; i < n; i++) {
		cutoffpoint = x[n - k];
	
	}

	printf("%d", cutoffpoint);


	return 0;
}