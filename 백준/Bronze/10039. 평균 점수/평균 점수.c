#include <stdio.h>
int main() {
	int score;
	int total = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d\n", &score);
		
		if (score <= 40) {
			total += 40;
		}

		else if (score > 40) {
			total += score;
		}
	}

	printf("%d", total/5);

}