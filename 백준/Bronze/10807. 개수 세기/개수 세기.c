#include <stdio.h>
int main() {
	int n, v;
	int array[100];
	int count = 0;
	scanf("%d", &n);

	if (n >= 1 && n <= 100) {
		for (int i = 1; i <= n; i++) {
			scanf("%d", &array[i]); 
		}

		scanf("%d", &v);
		if (v >= -100 && v <= 100) {
			for (int j = 1; j <= n; j++) {
				if (array[j] == v) {
					count = count + 1;
                    
				}

			}
		}
	}
    
   

	printf("%d", count);
    return 0;
}