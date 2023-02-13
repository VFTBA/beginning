#include <stdio.h>
int main() {
	int n[5];
	int total = 0;
	int average = 0;
	int temp = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d\n", &n[i]);
		total += n[i];
        
        
		for (int j = 0; j <= i; j++) {

			if (n[i] < n[j]) {

				temp = n[j];
				n[j] = n[i];
				n[i] = temp;
			}
        }

	}

	
	average = total / 5;
	printf("%d\n", average);
	printf("%d", n[2]);



	
	


	

}