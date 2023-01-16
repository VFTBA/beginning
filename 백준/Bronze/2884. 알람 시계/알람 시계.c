#include <stdio.h>
int main() {
	int h, m;
	scanf("%d %d", &h, &m);

	if (h >= 0 && h <= 23 && m >= 0 && m <= 59) {

		if (h == 0 && (m >= 45 && m <= 59)) {
			h = 0;
			m = m - 45;
		}

		else if (h == 0 && (m <= 44 && m >= 0)) {
			h = 23;
			m = m + 15;
		}

		else if (h >= 1 && h <= 23 && m <= 44 && m >= 0) {
			h = h - 1;
			m = m + 15;
		}

		else if (h >= 1 && h <= 23 && m >= 45 && m <= 59) {
			h = h;
			m = m - 45;
		}

		

		
		printf("%d %d", h, m);
		
	}

	
}