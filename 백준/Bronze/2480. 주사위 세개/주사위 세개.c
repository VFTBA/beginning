#include <stdio.h>
int main() {
	int a, b, c;
	int e = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= 1 && a <= 6 && b >= 1 && b <= 6 && c >= 1 && c <= 6) {
		if (a == b && b == c) {
			e = 10000 + a * 1000;
		}

		else if (a == b) {
			e = 1000 + a * 100;
		}
		
		else if (a == c) {
			e = 1000 + c * 100;
		}

		else if (b == c) {
			e = 1000 + b * 100;
		}

		else if (a != b && b != c && a != c) {
			if (a > b && a > c) {
				e = a * 100;
			}

			else if (b > a && b > c) {
				e = b * 100;
			}

			else if (c > a && c > b) {
				e = c * 100;
			}
		}

		printf("%d", e);
	}
}